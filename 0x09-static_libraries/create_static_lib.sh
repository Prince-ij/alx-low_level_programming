#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library liball.a from all object files
ar rcs liball.a *.o

# Clean up by removing the generated object files
rm -f *.o

