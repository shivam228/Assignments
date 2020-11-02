#! /bin/bash
echo "enter start line"
read x
echo "enter last line"
read y
sed -n "$x","$y"p example
