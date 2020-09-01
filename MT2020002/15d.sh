#! /bin/bash
echo "enter line from where you want to print till last line"
read x
sed -n $x,5p example
