#include "main.h"
/**
 * _strlen - function returns length of string
 * @str: parameter of function
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
		return (i);
}
/**
 * _strlenc -  function of strlen but applied for constant char
 * pointer str
 * @str: char pointer
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	return (i);
}
