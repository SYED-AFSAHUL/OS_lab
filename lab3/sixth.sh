#!/bin/sh
x=`ls *.txt`
for i in $x; do
if [ -f "$i" ]; then
	sed -i 's/^ex:/Example:/g' "$i"
	sed -i 's/\.ex:/.Example:/g' "$i"
else
	echo "hello"
fi
done
