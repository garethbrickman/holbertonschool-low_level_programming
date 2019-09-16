#include "holberton.h"

/**
 * *_strcat - function concatenates two strings
 *
 *@src: char pointer
 *@dest: char pointer
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;
	int n = _strlen(src);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
