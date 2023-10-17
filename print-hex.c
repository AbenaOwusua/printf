#include "main.h"
/**
 * printf_hex - function converts to hex
 * @val: parameter of function
 * Return: count
 */
int printf_hex(va_list val)
{
	int j, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
	num = num / 16;
	count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (j = 0 ; j < count ; j++)
	{
	array[j] = temp % 16;
	temp = temp / 16;
	}
	for (j = count - 1 ; j >= 0 ; j++)
	{
	if (array[j] > 9)
	array[j] = array[j] + 39;
	_putchar(array[j] + '0');
	}
	free(array);
	return (count);
}

