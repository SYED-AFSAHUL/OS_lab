#!/bin/bash
echo "entered file is : $1"
echo "enter number of copies to create - "
read num
x=$num

for (( i=1;i<=$x;i++)); do
  cp $1 "copy$i";
done
