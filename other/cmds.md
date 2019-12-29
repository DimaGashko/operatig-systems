# OC

## Some useful commands

mkdir foo && cd "$_"
gcc -o area area.c -lm

## Compile with static lib

- Object files: gcc -c main.c -o bin/main.o
- Create: ar rcs lib.a lib.o
- Link: gcc bin/main.o  -L{lib_dir} -l{lib_name} -o bin/res
