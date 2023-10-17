#include "main.h"
/**
 * printf_bin - function converts to binary
 * @val: argument
 * Return: integer
 */
int printf_bin(va_list val)
{
	int tflag = 0;
	int count = 0;
	int i;
	unsigned int number = va_arg(val, unsigned int);

	for (i = 31 ; i >= 0 ; i--)
	{
		if ((number >> i) & 1)
		{
			tflag = 1;
			_putchar('1');
		}
		else if (tflag)
		{
			_putchar('0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
