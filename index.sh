#!/bin/bash

out_dir=build
src_dir=src


# Output Directory Creation
  if [ ! -d $out_dir  ];
  then
    mkdir $out_dir;
  fi;

list_of_files=($(ls $src_dir))

for file_name in "${list_of_files[@]}";
do
  out_file_name=$(echo ${file_name//"."/ } | awk '{print $1}')
  
  g++ $src_dir/$file_name -o $out_dir/$out_file_name
done;

list_of_output_files=($(ls $out_dir))

echo -e "\n*\n*\n*\n*Rebuilding ...\n*\n*\n*"

for file_name in "${list_of_output_files[@]}";
do
  echo "O/P <$file_name.c++>"
  ./$out_dir/$file_name
  echo -e "\n\n"
done;
