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
	while (a[n] != '\0')
	{
		printf("%d", n);
			n++;
	}
	putchar('\n');
}
