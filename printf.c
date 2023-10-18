#include "main.h"
/**
 * _printf - function prints anything
 * @format: parameter of function
 * Return: integers
 */
int _printf(const char *format, ...)
{
	int tTotal = 0;
	va_list br;
	char *a, *start;
	params_t par = PARAMS_INIT;

	va_start(br, format);

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	for (a = (char *)format ; *a ; a++)
	{
	itp(&par, br);
if (*a != '%')
{
tTotal += _putchar(*a);
continue;
}
start = a;
a++;
while (gf(a, &par))
{
	a++;
}
a = gw(a, &par, br);
a = gp(a, &par, br);
if (gm(a, &par))
{
	a++;
}
if (!gs(a))
{
	tTotal += pft(start, a, par.l_m || par.h_m ? a - 1 : 0);
}
else
{
	tTotal += gpf(a, br, &par);
}
}
_putchar(BUF_FLUSH);
va_end(br);
return (tTotal);
}
