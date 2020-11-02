#! /bin/bash
echo "enter file name"
read file
if [ -f "$file" ];
then
echo "file $file exist"
else
echo "file $file not exist"
fi

