#include "holberton.h"

/**
 * *string_toupper - function changes all lowercase letters to uppercase
 *
 *@n: char * pointer
 *
 * Return: char *
 */

char *string_toupper(char *n)
{
	char *pn = n;

	while (*pn != '\0')
	{
		if (*pn >= 'a' && *n <= 'z')
	{
		*pn = ('A' - 'a') + *pn;
	}
	pn++;
	}
	return (n);
}
