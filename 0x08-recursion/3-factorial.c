#include "holberton.h"

/**
 * factorial - function returns factorial of given number
 *
 *@n: integer number
 *
 * Return: -1, 0 or factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
