#! /bin/bash
echo "enter string >"
read x
sed /$x/d example
