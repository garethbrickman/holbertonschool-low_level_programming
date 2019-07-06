#include "holberton.h"

/**
 * reverse_array - function reverses array of ints
 *
 *@a: int pointer
 *@n: array variable
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{

	int count = 0;
	int mid = n / 2;
	int tmp;

	while (count < mid)
	{
		tmp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = tmp;
			count++;
		}
}
