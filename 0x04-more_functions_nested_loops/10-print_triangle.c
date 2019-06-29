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
	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size; space++)
		{
			if (space > row)
			{
				_putchar(' ');
			}
			else if (space < row)
			{
				_putchar('#');
		}
		_putchar('#');
	}
	}
	_putchar('\n');
	}
}
