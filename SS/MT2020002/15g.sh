#! /bin/bash
echo "enter string you want to insert at end >"
read x
sed -i s/$/""$x/ example
