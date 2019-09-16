#include "holberton.h"

/**
 * *_strpbrk - function searches string for set of bytes
 *
 *@s: char * pointer
 *@accept: char * pointer
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ap = accept;
	int counter = 0;

	while (*s)
	{
		while (*(ap + counter))
		{
			if (*s == *(ap + counter))
		{
			return (s);
		}
			counter++;
		}
		counter = 0;
		s++;
	}
	return (0);
}
