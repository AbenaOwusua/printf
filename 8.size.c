#include "main.h"

/**
 * size_c - calculates the size or the length
 * @format: string format on how to print the arguments
 * @j: List of arguments to be printed
 * Return: size
 */

int size_c(const char *format, int *j)
{
	int size = 0;
	int c_arg = *j + 1;

	if (format[c_arg] == 'l')
		size = string_long;
	else if (format[c_arg] == 'h')
		size = string_short;

	if (size == 0)
		*j = c_arg - 1;
	else
		*j = c_arg;

	return (size);
}
