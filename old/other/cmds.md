# OC

## Some useful commands

mkdir foo && cd "$_"
gcc -o area area.c -lm

## Compile with static lib

- Object files: gcc -c main.c -o bin/main.o
- Create: ar rcs lib.a lib.o
- Link: gcc bin/main.o  -L{lib_dir} -l{lib_name} -o bin/res

## Compile with dynamic lib

- Object files: gcc -c -fPIC lib.c
- Create: gcc -shared lib.o -o lib.so
- Link: gcc  main.o -Lpath -lname -o main
- LD_LIBRARY_PATH=$(pwd)/bin/shared bin/use-shared-library or
- sudo mv lib.so /usr/lib
  sudo chmod 755 /usr/lib/lib.so

## What's inside

- ar -tv libarea.a
- ar -t libarea.a
- nm libarea.a
- nm main