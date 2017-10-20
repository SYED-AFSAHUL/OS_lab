#!/bin/bash

touch copydemo.txt
>copydemo

function_sort()
{
for i in "$@"; do
  echo $i>>"copydemo";
done
cat copydemo | sort -n
}

function_sort "$@"
