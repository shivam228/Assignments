#! /bin/bash
echo " enter starting pattern >"
read x
echo " enter ending pattern >"
read y
sed -n /^$x.*$y$/p example
