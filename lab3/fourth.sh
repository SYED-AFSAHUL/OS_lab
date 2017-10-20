#!/bin/sh

read B T
result=$(echo "$B"+"$T"+0.1*"$B"| bc -l)
r=$($B + $T)
echo "$r"
echo "$result"
