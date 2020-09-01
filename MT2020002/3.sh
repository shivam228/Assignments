#! /bin/bash
echo "enter no of arguments"
read x
while [ $x -gt 0 ]
do
touch file$x
echo "file $x created"
x=`expr $x - 1`
done
