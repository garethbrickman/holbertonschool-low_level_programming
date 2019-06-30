#include "holberton.h"
/**
 * print_triangle - function outputs triangle #
 *
 *@size: is int
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int row, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (row = 0; row < size; row++)
	{
		for (space = (size - 1); space >= 0; space--)
		{
			if (space <= row)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	}
}
