#include "main.h"
/**
 * reverse_c - prints a string in reverse
 * @val: args
 * Return: string
 */

int reverse_c(va_list val)
{
	char *string = va_arg(val, char*);
	int j;
	int k = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[k] != '\0')
		k++;
	for (j = k - 1; j >= 0; j--)
		_putchar(string[j]);
	return (j);
}
