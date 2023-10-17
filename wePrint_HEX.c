#include "main.h"
/**
 * weprintf_HEX - function convets to HEX
 * @num: parameter of function
 * Return: count
 */
int weprintf_HEX(unsigned int num)
{
	int j, count = 0;
	int *array;
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
	array[j] = array[j] + 7;
	_putchar(array[j] + '0');
	}
	free(array);
	return (count);
}

