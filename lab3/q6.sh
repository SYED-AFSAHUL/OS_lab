#!/bin/sh

grep -lr 'ex:' | xargs -0 sed -e 's/[^ex: , ex:$]/Example/g'

