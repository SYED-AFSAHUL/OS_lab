#!/bin/sh

read s

VAR1=$(find -type f | grep "$s")
echo "$VAR1"
