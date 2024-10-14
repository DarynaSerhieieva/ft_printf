# ft_printf
## Overview
ft_printf is a project designed to replicate the functionality of the standard printf() function found in the C standard library (libc).
This custom implementation of printf allows formatted output of various data types and provides a comprehensive understanding of variadic functions and format specifiers.
The project was built using my custom library Libft, and includes utilities for testing and simple compilation.

## Features
Supports basic format specifiers:

- %c: Character
- %s: String
- %d, %i: Signed decimal integer
- %u: Unsigned decimal integer
- %x, %X: Hexadecimal (lowercase and uppercase)
- %p: Pointer address
- %%: Percent sign

## Project Structure
- ft_printf library: The core of the project, containing the custom implementation of printf() and its associated helper functions.
- Libft: A personal library with essential utility functions for string manipulation, memory handling, etc. It serves as a foundation for ft_printf.
- main.c: A test file used to test the different features of the ft_printf function. You can modify or expand this file for more test cases.
- bash.sh: A simple bash script to compile and test the program. You can use this script to compile the project by simply calling ./bash.

## Installation
1. To compile the ft_printf project and run the tests, follow these steps:
    ```sh
   git clone https://github.com/DarynaSerhieieva/ft_printf.git
   ```
    ```sh
    cd ft_printf
   ```
2. Run the Bash Script:
   ```sh
   ./bash
   ```
   This will trigger the Makefile, compile the project, and run the main.c file to test your ft_printf implementation.
## Usage
You can use ft_printf in a similar way to printf():
```c
ft_printf("Hello, %s! You are %d years old.\n", "Alice", 25);
```
This will output:
```sql
Hello, Alice! You are 25 years old.
```
## Compilation
If you prefer manual compilation (without using bash.sh), you can compile the project using the Makefile. To compile and generate the ft_printf executable, run:
```sh
make
```
Then, you can compile your main.c file with the library by running:
```sh
gcc -Wall -Wextra -Werror -I ./libft -I ./includes -o main main.c libftprintf.a ./libft/libft.a
```
Afterward, run your main program:
```sh
./main
```
This will generate the necessary object files and compile the project. If you want to clean up the compiled files afterward, you can run:
```sh
make clean  # Removes object files
make fclean # Removes object files and executable
```
To delete your executable main, run this:
```sh
rm main
```
## Testing
You can add your own test cases to main.c to check additional functionalities. The project supports formatted output for a variety of data types, and it's easy to extend and verify your ft_printf implementation.
