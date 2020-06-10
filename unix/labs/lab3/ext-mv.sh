#!/bin/bash

# 5. Перенести файли з вказаними розширеннями імені з поточного каталога
# у вказаний каталог, вивести інформацію про перенесення кожного файлу.

# usage:./ext-mv.sh src dst ext1 ext2 ext3...

for e in "${@:3}"; do
   for f in $(find $1 -maxdepth 1 -name "*.$e"); do
      mv $f $2
      echo $f
   done
done
