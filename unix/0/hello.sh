#! /bin/bash

# Say hello to be polite
echo "Hello World"

echo Your Bash: $BASH

msg="Some nice message"

echo $msg

echo $0 $1 $2 $3

args=("$@")
echo ${args[1]}

echo $@

read
echo $REPLY

read -a arr
echo ${arr[1]} ${arr[0]}

echo "How old are you?"
read age
echo "You're" $age 

read -p "name: " name
echo "Hi, $name"

read -sp "password: " pwd
echo "Your password: $pwd"


