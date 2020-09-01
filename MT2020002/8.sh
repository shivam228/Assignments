#! /bin/bash
echo "enter username"
read x
count=`who | grep "$x" | wc -l`
if [ $count -eq 0 ]
then
echo "user has not logged  in"
else
echo "user has logged in"
fi
