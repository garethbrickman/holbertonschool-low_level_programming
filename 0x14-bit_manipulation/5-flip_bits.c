#include "holberton.h"

/**
 * flip_bits - function returns number of bits needed to flip a number
 *
 *@n: unsigned long int number input
 *@m: unsigned long int number input
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return countbits(n ^ m);
}

unsigned long int countbits(unsigned long int n)
{
	unsigned long int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
