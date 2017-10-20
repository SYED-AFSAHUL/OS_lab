#!/bin/sh

E=$1
D=$2

find -type f -name '*.$ex' -print0 | xargs -0 cp /$di
