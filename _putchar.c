#include <unistd.h>
/**
 * _putchar - function writes character c to stdout
 * @c: parameter of function
 * Return: 1 if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
