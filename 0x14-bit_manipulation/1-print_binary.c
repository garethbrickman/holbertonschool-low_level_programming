#include "holberton.h"

/**
 * print_binary - function prints binary conversion of a number
 *
 *@n: unsigned long int number input
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	n = n & 1;
	_putchar(n + '0');
}
