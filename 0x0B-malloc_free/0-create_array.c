#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *create_array - function creates array of chars with specific char init
 *
 *@size: unsigned int size
 *@c: char specified
 *
 * Return: NULL or 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size > 0)
	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (array);
}
