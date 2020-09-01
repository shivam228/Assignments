#! /bin/bash



msg=`date +%H`

if [ $msg -lt 12 ]; then
  echo Good morning
elif [ $msg -lt 18 ]; then
  echo Good afternoon
else
  echo Good evening
fi


