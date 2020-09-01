#! /bin/bash
echo "enter string you want to replace >"
read x
echo "enter string with which you want to replace >"
read y
sed -i  s/$x/$y/ example
