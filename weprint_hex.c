#include "main.h"
/**
 * weprint_hex - function convets to hex
 * @num: parameter of function
 * Return: count
 */
int weprint_hex(unsigned long int num)
{
	long int j, count = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
	num = num / 16;
	count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);
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

