#include "holberton.h"
/**
 * print_sign -  filters Holberton input for >, < or = 0
 *
 * @n: int for any number
 *
 * Return: 1 when >0, 0 when 0, -1 when <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
