#include "holberton.h"
/**
 * print_diagonal - function outputs \
 *
 *@n: is int for \
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int ns;

	for (ns = 0; ns < n; ns++)
	{
		for (n = 0; n > 0; n++)
		{
			_putchar (92);
		}
		if (n <= 0)
		{
			_putchar ('\n');
		}

	}
			 _putchar ('\n');
}
