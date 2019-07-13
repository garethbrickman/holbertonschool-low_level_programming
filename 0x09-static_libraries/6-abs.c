#include "holberton.h"
/**
 * _abs - function computes absolute value of integer
 *
 * @n:  integer number for n
 *
 * Return: 0
 */
int _abs(int n)
{

	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
