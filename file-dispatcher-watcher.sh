#!/bin/bash

build_file_name=".build-version";
version="1";
app_name="c-programs";
container_port="80";
os_port="80";

touch .begin .end;

if [ -f $build_file_name ];
then
  version=$(cat $build_file_name);
	echo `expr $version + 1` > $build_file_name; 
else
	echo "2" > $build_file_name;
fi;

sudo docker build --no-cache -t $app_name:$version -f ./Dockerfile ./;
sudo docker stop $app_name;
sudo docker rm $app_name;
sudo docker run --name="$app_name" -d -p $os_port:$container_port $app_name:$version;

while [ True ];
do
	stat -x src/* > .begin;
	diff=$(diff .begin .end | wc -l);
	
	if [ $diff != "0" ];
	then
		stat -x src/* > .end;
		
		for f in src/*;
		do 
    	docker cp $f $app_name:/app/src/;
		done
	fi
  
  sleep 3;
done;