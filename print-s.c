#include "main.h"
/**
 * printf_string - function prints string
 * @val: argument of function
 * Return: length of string
 */
int printf_string(va_list val)
{
	char *str;
	int a;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(nil)";
		length = _strlen(str);
		for (a = 0 ; a < length ; a++)
			_putchar(str[a]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (a = 0 ; a < length ; a++)
			_putchar(str[a]);
		return (length);
	}
}
