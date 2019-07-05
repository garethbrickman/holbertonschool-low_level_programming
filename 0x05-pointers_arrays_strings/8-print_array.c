#include "holberton.h"
#include<stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 *
 *@a: char pointer
 *@n: integer
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count == (n - 1))
		{
			printf("%d", *a);
			a++;
			count++;
		}
		else
		{
		printf("%d, ", *a);
		a++;
		count++;
		}
	}
	putchar('\n');
}
