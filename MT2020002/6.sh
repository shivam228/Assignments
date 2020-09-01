#!/bin/bash

echo -n "Enter text out of these choices 1.ls 2.pwd 3.who 4.exit > "
read x
if [[ "$x" ==  "ls" ]];
then
ls
elif [[ "$x" ==  "pwd" ]];
then
pwd
elif [[ "$x" ==  "who" ]];
then
who
else
exit
fi

