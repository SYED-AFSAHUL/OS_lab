#!/bin/sh

PASSED=$1
TA=$2
echo "scale=3; 1.1*${PASSED}+${TA}" | bc
