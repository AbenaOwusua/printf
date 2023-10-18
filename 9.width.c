#include "main.h"

/**
 * width_c - calculates the width
 * @format: format string
 * @j: list of arguments to be printed
 * @list: list of arguments
 * Return: width
 */

int width_c(const char *format, int *j, va_list list)
{
	int width = 0;
	int current_arg = *j + 1;

	while (format[current_arg] != '\0')
	{
		if (is_digit(format[current_arg]))
		{
			width = width * 10;
			width = width + (format[current_arg] - '0');
		}
		else if (format[current_arg] == '*')
		{
			current_arg++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	current_arg++;
	*j = current_arg - 1;

	return (width);
}
