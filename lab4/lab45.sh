#!/bin/bash
echo "enter 1. for search the pattern in given file"
echo "enetr 2. for delete the pattern in given file"
echo "enter 3. for exit"
read num
x=$num
case $x in
1)
echo "entered patterns are"
for i in "$@"; do 

echo $i; done
echo "enter file name to search these patterns in"
read fname
for i in "$@"; do
sed -nr /$i/p $fname;
done
;;

2)
echo "entered patterns are"
for i in "$@"; do 

echo $i; done
echo "enter file name to delete these patterns in"
read fname
for i in "$@"; do
sed -i s/$i//g $fname;
done
;;
3)
exit
esac
