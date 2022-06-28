#!/bin/bash

# This script takes in a file that has been converted by converter and prints it
# How the code will print it.

if [ $# -ne 1 ]; then
	echo -e "Invalid arg count: $#\nThe only argument is the path to the file\nex: ./main.sh ../example.tmp"
	exit
fi

printf "$(cat $1)"
