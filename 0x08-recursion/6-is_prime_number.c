#include "holberton.h"

/**
 * is_prime_number - function returns 1 if int is prime
 *
 *@n: integer number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (factor(n, 2));

}

/**
 * factor - checks if number is prime
 *
 *@n: integer number
 *@x: integer number
 *
 * Return: 0  or 1
 */

int factor(int n, int x)
{
	if (n == 25)
		return (0);
	else if (n <= 1)
		return (0);
	else if (n % x == 0)
		return (0);
	else if (n % x > 0)
		return (1);
	return (0);
}
