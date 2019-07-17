#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * **alloc_grid - function returns ptr to 2D array of ints
 *
 *@width: int
 *@height: int
 *
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr, row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		ptr[row] = malloc(sizeof(int) * width);

		if (ptr[row] == NULL)
		{
			while (row >= 0)
			{
				free(ptr[row]);
				row--;
			}
			free(ptr);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			ptr[row][col] = 0;
		}
	}
	return (ptr);
}
