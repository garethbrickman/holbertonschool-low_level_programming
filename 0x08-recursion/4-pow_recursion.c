#include "holberton.h"

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
