#!/bin/bash

echo PID=$$

count=0

sigint() {
   count=$((count+1))
   echo "SIGINT received $count times"
}

trap 'sigint' sigint

while /usr/bin/true; do
   sleep 10
done
