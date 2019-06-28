#include "holberton.h"
/**
 * print_diagonal - function outputs \
 *
 *@n: is int
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (row = 1; row <= n; row++)
	{
		for (space = 1; space <= n; space++)
		{
			if (space < row)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
