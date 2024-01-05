# ft_printf

Welcome to `ft_printf` – a custom implementation of the printf function in C! This project aims to replicate the functionality of the standard printf function while adding customizable features and optimizations.

## About

`ft_printf` is a C function that performs formatted output to the standard output stream or a string. It handles various conversion specifiers, flags, field widths, precision, and more, providing a versatile and efficient printing tool.

## Features

- **Conversion Specifiers:** Supports `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`.
- **Customizable Behavior:** Allows for custom modifications and additional functionality beyond standard printf.

## Usage

To use `ft_printf` in your project, simply include the `ft_printf.h` header file and link the `libftprintf.a` library file during compilation. The function usage is similar to the standard printf function, utilizing format specifiers and arguments to produce formatted output.

Example usage:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! The number is %d.\n", "user", 42);
    return 0;
}
