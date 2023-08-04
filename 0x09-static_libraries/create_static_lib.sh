#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

# Create the static library 'liball.a' from the compiled object files
ar rcs liball.a *.o

# Cleanup intermediate object files
rm -f *.o

echo "Static library liball.a created successfully!"

