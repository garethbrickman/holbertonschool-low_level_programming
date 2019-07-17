#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *argstostr - function concatenates all the arguments
 *
 *@ac: int equivalent to argc
 *@av: dble ptr equivalent to argv
 *
 * Return: ptr or NULL
 */

char *argstostr(int ac, char **av)
{
	char *pav;
	int x, y;
	int z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			z++;
		}
	}
	pav = malloc(sizeof(char) * (z + ac) + 1);
	if (pav == NULL)
		return (NULL);
	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
		{
			pav[z] = av[x][y];
		}
		pav[z] = '\n';
		z++;
	}
	pav[z] = '\0';
	return (pav);
}
