#include "holberton.h"

/**
 * _strlen_recursion - function returns length of a string
 *
 *@s: char * pointer
 *
 * Return: 0 or length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);

	}
}
