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
	return (factor(n, 1));

}

/**
 * factor - function checks if n is a square root
 *
 *@n: integer number
 *@x: integer number
 *
 * Return: x  or -1
 */

int factor(int n, int x)
{
	if (x * x < n)
		return (factor(n, x + 1));
	else if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	return (0);
}
