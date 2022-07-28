#!/bin/bash

touch .begin .end;

while [ True ];
do
	ls -lR  --full-time src/ > .begin;
	diff=$(diff .begin .end | wc -l);
	
	if [ $diff != "0" ];
	then
		ls -lR  --full-time src/ > .end;

		bash ./index.sh
	fi
  
  sleep 3;
done;