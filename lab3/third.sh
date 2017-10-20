#!/bin/sh
S=$(find -type f -name "*.txt")
for i in $S; do
echo "${i%.txt}.text"
mv "$i"  "${i%.txt}.text"
done
