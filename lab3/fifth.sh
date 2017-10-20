#!/bin/sh

read ext folder

for i in *."$ext"; do
cp "$i" "$folder/$i"
done
