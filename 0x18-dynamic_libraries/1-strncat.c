#include "holberton.h"

/**
 * *_strncat - function concatenates two strings
 *
 *@src: char pointer
 *@dest: char pointer
 *@n: int for bytes
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
