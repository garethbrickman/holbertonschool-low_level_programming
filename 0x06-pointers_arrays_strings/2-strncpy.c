#include "holberton.h"

/**
 * *_strncpy - function copies a string
 *
 *@src: char pointer
 *@dest: char pointer
 *@n: int for bytes
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
		for ( ; i < n; i++)
			dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - function returns length of a string
 *
 *@s: char pointer
 *
 * Return: length
 *
 */

int _strlen(char *s)
{
	char *copy_s = s;
	int length = 0;

	while (*copy_s != '\0')
	{
		length++;
		copy_s++;
	}
	return (length);
}
