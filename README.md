# ft_printf

> A lightweight, custom implementation of the standard C `printf` function.

This project introduces the concept of variadic functions in C using `<stdarg.h>`. It recreates the core behavior of the standard `printf` function, handling formatted output and type conversion for various data types.

## Supported Conversions

This implementation handles the following format specifiers:

* **`%c`**: Prints a single character.
* **`%s`**: Prints a string of characters.
* **`%p`**: Prints a pointer address in hexadecimal format.
* **`%d`** / **`%i`**: Prints a signed decimal integer.
* **`%u`**: Prints an unsigned decimal integer.
* **`%x`**: Prints a hexadecimal number (base 16) in lowercase.
* **`%X`**: Prints a hexadecimal number (base 16) in uppercase.
* **`%%`**: Prints a literal percent sign.

## Usage

### 1. Compilation
The project compiles into a static library (`libftprintf.a`). Generate it using the `Makefile`:

```bash
make
