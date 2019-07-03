#include "holberton.h"
#include<stdio.h>

/**
 * *_strcpy - function copies string pointed by src to buffer pointer dest
 *
 *@dest: char pointer
 *@src: char pointer
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = *src;

	while (a != '\0')
	{
		*dest = *src;
		a++;
	}
	return (dest);
}
