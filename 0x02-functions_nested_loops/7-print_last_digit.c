#include "holberton.h"
/**
 * print_last_digit - function computes last digit of number
 *
 * @n:  integer number for n
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		(n = -1 * n);
		(n = n % 10);
		_putchar ('0' + n);
	}
	else
	{
		(n = n  % 10);
		_putchar ('0' + n);
	}
	return (n);
}
