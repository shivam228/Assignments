#! /bin/bash

awk 'BEGIN { count=0;}
$4 ~ /technology/ { count++; }
END { print " employees in technology dept =",count;}' employee

