#include "holberton.h"
/**
 * void print_line(int n) - function outputs _____
 *
 *@n is int for line
 *
 * Return: 0
 */
void print_line(int n)
{
	int num;

	for (num = 0; num < 10; num++)
		if (num != 2 && num != 4)
	{
		_putchar(num + '0');
	}
		_putchar('\n');
}
