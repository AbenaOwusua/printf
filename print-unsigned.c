#include "main.h"
/**
 * printf_unsigned - function prints integer
 * @args: argument
 * Return: integer
 */
int printf_unsigned(va_list args)
{
	int a = va_arg(args, int);
	int num, last = a % 10, digit, expo = 1;
	int i = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
	_putchar('-');
	num = -num;
	a = -a;
	last = -last;
	i++;
	}
	if (num > 0)
	{
	while (num / 10 != 0)
	{
	expo = expo * 10;
	num = num / 10;
	}
	num = a;
	while (expo > 0)
	{
	digit = num / expo;
	_putchar(digit + '0');
	num = num - (digit * expo);
	expo = expo / 10;
	i++;
	}
	}
	_putchar(last + '0');
	return (i);
}

