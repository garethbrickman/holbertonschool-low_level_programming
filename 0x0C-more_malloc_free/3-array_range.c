#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *array_range - function creates array of ints
 *
 *@min: int
 *@max: int
 *
 * Return: ptr or NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int size = max - min;
	int i = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	if (size > min)
	{
		while (i < size)
		{
			array[i] = min;
			i++;
			min++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
