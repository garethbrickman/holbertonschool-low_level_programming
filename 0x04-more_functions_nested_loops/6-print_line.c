#include "holberton.h"
/**
 * print_line - function outputs _____
 *
 *@n: is int for line
 *
 * Return: 0
 */

void print_line(int n)
{
	int ns;

	for (ns = 0; ns < n; ns++)
	{
		if (n <= 0)
		{
			_putchar ('\n');
		}
		_putchar (95);
	}
			 _putchar ('\n');
}
