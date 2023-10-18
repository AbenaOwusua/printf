#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define UNUSED(x) (void)(x)

/* SIZES */
#define string_long 2
#define string_short 1

int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int prints_37(void);
int printf_dec(va_list args);
int printf_int(va_list args);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int weprintf_HEX(unsigned int num);
int printf_exclusivestr(va_list val);
int print_the_pointer(va_list val);
int weprint_hex(unsigned long int num);
int size_c(const char *format, int *j);
int width_c(const char *format, int *j, va_list list);
int precision_c(const char *format, int *j, va_list list);
int reverse_c(va_list val);

#endif
