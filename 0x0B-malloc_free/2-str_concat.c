#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *str_concat - function concatenates two strings
 *
 *@s1: char pointer
 *@s2: char pointer
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, i, x;
	char *pstr;

		if (s1 == NULL)
		{
			s1 = malloc(sizeof(char));
			s1[0] = '\0';
		}
		if (s2 == NULL)
		{
			s2 = malloc(sizeof(char));
			s2[0] = '\0';
		}
		for (s1len = 0; s1[s1len] != '\0'; s1len++)
			;
		for (s2len = 0; s2[s2len] != '\0'; s2len++)
			;
		pstr = malloc(sizeof(char) * (s1len + s2len + 1));

		if (pstr == NULL)
		{
			free(pstr);
		}
		for (i = 0 ; i < s1len; i++)
		{
			pstr[i] = s1[i];
		}
		for (x = 0; x < s2len; x++)
		{
			pstr[s1len + x] = s2[x];
		}
		if (pstr)
		{
			return (pstr);
		}
		return (NULL);
}
