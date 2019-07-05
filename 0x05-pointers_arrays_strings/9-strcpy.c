#include "holberton.h"
#include<stdio.h>

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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
