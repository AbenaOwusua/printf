#include "main.h"

/**
 * precision_c - calculate the precision
 * @format: formatted strings in which to print the arguments
 * @j: list of args. to be printed
 * @list: list of arguments
 * Return: precision
 */

int precision_c(const char *format, int *j, va_list list)
{
	int precision = -1;
	int val = *j + 1;

	if (format[val] != '.')
	{
		return (precision);
	}
	precision = 0;

	for (val = val + 1; format[val] != '\0'; val++)
	{
		if (is_digit(format[val]))
		{
			precision *= 10;
			precision += format[val] - '0';
		}
		else if (format[val] == '*')
		{
			val++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*j = val - 1;

	return (precision);
}

