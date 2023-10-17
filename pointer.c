#include "main.h"
/**
 * print_the_pointer - function prints pointer
 * @val: parameter of function
 * Return: m + 2
 */
int print_the_pointer(va_list val)
{
	void *p;
	char *g = "(nil)";
	int m, j, b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (j = 0 ; g[j] != '\0' ; j++)
			_putchar(g[j]);
		return (j);
	}
	b = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	m = weprint_hex(b);
	return (m + 2);
}
