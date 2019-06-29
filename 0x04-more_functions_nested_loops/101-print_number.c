#include "holberton.h"
/**
 * print_number - function outputs digit integers
 *
 *@n: is int for digit integer
 *
 * Return: 0
 */

void print_number(int n)
{
	int n = 667056;
	int y = 1000000000;
	int x, z;
	for (x = 0; x < 10; x++)
	{
		if ((n / y) == 0 && z == 0)
		{
			y = (y / 10);
			continue;
		}
		else if (z == 0)
		{
			putchar((n / y) + '0');
			z++;
		}
		else
		{
			putchar ((n / y) % 10 + '0');
		}
		y = (y / 10);
	}
	putchar('\n');
}
