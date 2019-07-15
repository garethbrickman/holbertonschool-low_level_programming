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
	char *src1 = src - 1;

	while (*src != '\0')
	{
		*pdest = *src1;
		src1++;
		pdest++;
	}
	return (dest);
}
