#include "holberton.h"

/**
 * get_bit - function returns the value of a bit at a given index
 *
 *@n: unsigned long int number input
 *@index: unsigned int index position
 *
 * Return: value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	while (n)
	{
		n = ((n >> index) & 1);
		if (index < 64)
			return (n);
		else
			return (-1);
	}
	return (-1);
}
