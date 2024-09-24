#!/bin/bash

# Run make to build libftprintf.a and libft.a
make

# Check if make succeeded
if [ $? -ne 0 ]; then
    echo "$(tput setaf 1)Make failed. Test FAILED$(tput sgr0)"
    exit 1
fi

# Variables for paths
ROOT_LIB="libftprintf.a"
LIBFT_PATH="./libft"
LIBFT_LIB="$LIBFT_PATH/libft.a"
INCLUDE_PATH="./includes"  # Fixed typo here

# Compiler flags
CFLAGS="-Wall -Wextra -Werror"
INCLUDE_FLAGS="-I $LIBFT_PATH -I $INCLUDE_PATH"

# Source files
MAIN_FILE="main.c"

# Output executable name
OUTPUT="main"

# Compile the main.c with the two libraries and header files
gcc $CFLAGS $INCLUDE_FLAGS -o $OUTPUT $MAIN_FILE $ROOT_LIB $LIBFT_LIB

# Check exit status of gcc (compilation step)
if [ $? -eq 0 ]; then
    # Run the compiled program
    ./main
    
    # Check exit status of the program
    if [ $? -eq 0 ]; then
        echo "$(tput setaf 2)Test PASSED$(tput sgr0)"
    else
        echo "$(tput setaf 1)Test FAILED$(tput sgr0)"
    fi
else
    echo "$(tput setaf 1)Compilation failed. Test FAILED$(tput sgr0)"
fi
