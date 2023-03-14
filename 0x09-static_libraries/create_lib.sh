#!/bin/bash

# Take input for the C file name
echo "Enter the name of the C file (without the .c extension): "
read c_file_name

# Take input for the object file name
echo "Enter the name of the object file (without the .o extension): "
read object_file_name

# Compile the C file and create the object file
gcc -c ${c_file_name}.c -o ${object_file_name}.o

# Create the static library
ar rcs libmy.a ${object_file_name}.o
