#include "holberton.h"

/**
 * *_strcmp - function compares two strings
 *
 *@s1: char pointer
 *@s2: char pointer
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	for (
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
