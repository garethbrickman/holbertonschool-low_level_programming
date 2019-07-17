#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - function frees 2d grid
 *
 *@grid: ptr to ptr
 *@height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
