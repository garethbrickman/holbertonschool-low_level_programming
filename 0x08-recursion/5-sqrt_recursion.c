#include "holberton.h"

/**
 * _sqrt_recursion - function returns natural square root of number
 *
 *@n: integer number
 *
 * Return: -1 or square root
 */

int _sqrt_recursion(int n)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}

/**
 * _pow_recursion - function returns value of x ^ y
 *
 *@x: integer number
 *@y: integer number
 *
 * Return: -1 or power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
