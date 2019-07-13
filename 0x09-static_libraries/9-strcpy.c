#include "holberton.h"

/**
 * *_strcpy - function copies string pointed by src to buffer pointer dest
 *
 *@dest: char pointer
 *@src: char pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *pdest = dest;

	while (*src != '\0')
	{
		*pdest = *src;
		src++;
		pdest++;
	}
	return (dest);
}
