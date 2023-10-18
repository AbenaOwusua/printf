#include "main.h"

/**
 * rot13_c - converts to rot13
 * @val: args
 * Return: substitution
 */

int rot13_c(va_list val)
{
	int i, j, k, substitution = 0;
	char *s = va_arg(val, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				substitution++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			substitution++;
		}
	}
	return (substitution);
}
