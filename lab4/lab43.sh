#!/bin/bash
>copydemo
for i in "$@"; do
  echo $i>>"copydemo";
done
cat copydemo | sort -n
