#! /bin/bash
echo "enter string you want to find >"
read x
sed -n /$x/p example
