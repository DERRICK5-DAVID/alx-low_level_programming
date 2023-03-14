#!/bin/bash
# Compile .c files in current directory then create .o files
for c_file in *.c
do
    object_file=${c_file%.c}.o
    gcc -c $c_file -o $object_file
done

# Create static library from .o files
ar rcs liball.a *.o
