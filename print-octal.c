#include "main.h"
/**
 * print_oct - function convets to octal
 * @val: parameter of function
 * Return: count
 */
int print_oct(va_list val)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0 ; i < count ; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(array[i] + '0');
	free(array);
	return (count);
}
