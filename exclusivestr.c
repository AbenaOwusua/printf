#include "main.h"
/**
 * printf_exclusivestr - function handles custom conversion specifier
 * @val: parameter of function
 * Return: length
 */
int printf_exclusivestr(va_list val)
{
	int j;
	char *f;
	int length = 0;
	int tValue;

	f = va_arg(val, char *);
	if (f == NULL)
		f = "(nil)";
	for (j = 0 ; f[j] != '\0' ; j++)
	{
		if (f[j] < 32 || f[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			tValue = f[j];
			if (tValue < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + weprintf_HEX(tValue);
		}
		else
		{
			_putchar(f[j]);
			length++;
		}
	}
	return (length);
}
