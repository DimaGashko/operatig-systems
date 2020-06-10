#!/bin/bash

# removes comments from stdin for $1 and print results to stdout or $2

# usage: ./nocomment input.txt output.txt
# or: cat input.txt | ./nocomment.sh > output.txt

if [ $1 ]; then
   exec 0<$1
fi

if [ $2 ]; then
   exec 1>$2
fi

while read line; do
   if [[ $line != \#* ]]; then echo $line; fi
done
