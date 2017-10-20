#!/bin/sh

read character

if [ -d "$character" ]; then
	echo "$character is a directory"
elif [ -f "$character" ]; then
	echo "$character is a file"
else
	echo "Not valid"
fi
