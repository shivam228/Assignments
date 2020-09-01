#!/bin/bash
echo "enter operation 1.remove 2.copy 3.rename >"
read x

case "$x" in
   "remove" )
   echo "enter file name u want to remove."
   read n
   rm -r $n
   echo "file removed"
   ;;
   "copy" )
   echo "enter source file "
   read j
   echo "enter destination file"
   read k
   cp -i $j $k
   echo "file copied"
   ;;
   "rename" )
   echo "enter file name you want to change"
   read s
   echo "enter new file name"
   read d
   touch $d
   mv $s $d
   echo "file moved"   
   ;;
esac
