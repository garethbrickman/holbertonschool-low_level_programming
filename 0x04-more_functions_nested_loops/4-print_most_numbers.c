#include "holberton.h"
/**
 * print_most_numbers - function outputs digits 0-9 without 2 and 4
 *
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		if (num != 2 && num != 4)
	{
		_putchar(num + '0');
	}
		_putchar('\n');
}
