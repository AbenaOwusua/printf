#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024
#define PARAMS_INIT {0, 0}
#define BUF_FLUSH 0
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
typedef struct {
	int l_m;
	int h_m;
} params_t;
void itp(params_t *params, va_list args);
int gf(char *format, params_t *params);
char *gw(char *format, params_t *params, va_list args);
char *gp(char *format, params_t *params, va_list args);
int gm(char *format, params_t *params);
int gs(char *format);
int gpf(char *format, va_list args, params_t *params);
int pft(char *start, int offset, int modifier);

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

#endif
