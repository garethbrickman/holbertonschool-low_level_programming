#include "holberton.h"
#include<stdio.h>
/**
 * *cap_string - function capitalizes all words of a string
 *
 *@n: char * pointer
 *
 * Return: char *
 */

char *cap_string(char *n)
{
	int count;
	int count2;
	char *x = " .,{}()\n\t\"?!";

	for (count = 0; *(n + count) != '\0'; count++)
	{
		for (count2 = 0; *(x + count2) != '\0'; count2++)
		{
			if (*(n + count - 1) == *(x + count2) && *(n + count) >=
			    'a' && *(n + count) <= 'z')
			{
				*(n + count) = ('A' - 'a') + *(n + count);
			}
			else if ((count == 0) && *(n + count) >= 'a' && *(n + count) <= 'z')
			{
				*(n + count) = ('A' - 'a') + *(n + count);
			}
		}
	}
	return (n);
}
