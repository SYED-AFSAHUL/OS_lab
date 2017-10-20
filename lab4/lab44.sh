#!/bin/bash
echo "entered file is : $1"
echo "enter 1. for linecount"
echo "enetr 2. for wordcount"
echo "enter 3. for charcount"

read num
x=$num

case $x in
   1) echo "you selected linecount" 
wc -l $1
   ;;
   2) echo "you selected wordcount" 
      wc -w $1
   ;;
   3) echo "you selected charcount" 
wc -m $1
   ;;
esac
