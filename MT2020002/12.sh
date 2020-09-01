#! /bin/bash
echo "enter name"
read x
if [ "$x" == "iit" ]; 
then
echo "nit"
elif [ "$x" == "nit" ];
then
echo "iit"
else
echo "Stderr"
fi
