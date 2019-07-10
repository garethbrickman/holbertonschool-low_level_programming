#include "holberton.h"

/**
 * *_memcpy - function copies memory area
 *
 *@dest: char * pointer
 *@src: char * pointer
 *@n: unsigned int of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	return (dest);
}
