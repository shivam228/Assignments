#! /bin/bash
echo "enter string you want to insert at start >"
read x
sed -i s/^/$x/ example
