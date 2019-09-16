#include "holberton.h"

/**
 * _strchr - function locates character in a string
 *
 *@s: char * pointer
 *@c: char
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
