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
	char *ps1 = s1;
	char *ps2 = s2;

	for (; *ps1 != '\0'; ps1++, ps2++)
	{
		if (*ps1 != *ps2)
		{
			return (*ps1 - *ps2);
		}
	}
	return (0);
}
