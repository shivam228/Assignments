#! /bin/bash

echo "enter a no for which u want to print mulplication table"
read x


for i in 1 2 3 4 5 6 7 8 9 10
do
echo $x "x" $i "="  $(expr $x \* $i )
done


