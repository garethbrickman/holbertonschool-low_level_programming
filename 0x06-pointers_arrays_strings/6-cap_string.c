#include "holberton.h"

/**
 * *cap_string - function capitalizes all words of a string
 *
 *@n: char * pointer
 *
 * Return: char *
 */

char *cap_string(char *n)
{
	int count = 0;
	char *x = ".,{}()\n\t\"?!";

	for (; *(count + n) != '\0'; count++)
		{
			if ((*(count + n) - 1) == *x && *(n + count) >= 'a' && *(n + count) <= 'z')
			{
				*(count + n) = ('A' - 'a') + *(count + n);
			}
		}
			return (n);
}
