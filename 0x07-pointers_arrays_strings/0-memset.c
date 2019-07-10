#include "holberton.h"

/**
 * *_memset - function fills memory with constant byte
 *
 *@s: char * pointer
 *@b: char constant byte
 *@n: unsigned int of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		*(s + counter) = b;
		counter++;
	}
	return (s);
}
