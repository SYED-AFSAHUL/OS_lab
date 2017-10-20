#!/bin/bash

find -type f -name '*.txt' -print0 | xargs -0 rename 's/.txt$/.text/'
