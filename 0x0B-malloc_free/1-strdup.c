#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *_strdup - function returns ptr to newly allocated pace in memory, which
 * contains a copy of the string given as a parameter.
 *
 *@str: char pointer
 *
 *
 * Return: pstr2 or NULL
 */

char *_strdup(char *str)
{
	char *pstr = str;
	char *pstr2;
	char *pstr22;
	int len = 0;
	int mallen;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*pstr != '\0')
	{
		len++;
		pstr++;
	}
	mallen = len + 1;

	pstr2 = malloc(sizeof(char) * mallen);
	if (!pstr2)
	{
		return (NULL);
	}
	else
	{
		pstr22 = pstr2;

		while (*str != '\0')
		{
			*pstr2 = *str;
			str++;
			pstr2++;
		}
		*pstr2 = *str;
		return (pstr22);
	}
	free(pstr22);
}
