#include "holberton.h"
#include<stdio.h>
/**
 * print_diagsums - function prints sum of two diagonals of square matrix
 *
 *@a: char * pointer to multidimensional array
 *@size: integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int left = size + 1;
	int right = size - 1;
	int sizetotal = size * size;
	int loop1;
	int loop2;
	int startsize = size * (size - 1);
	int total1 = 0;
	int total2 = 0;

	for (loop1 = 0; loop1 < sizetotal; loop1 = loop1 + left)
	{
		total1 = total1 + a[loop1];
	}
	printf("%d, ", total1);
	for (loop2 = startsize; loop2 > 0; loop2 = loop2 - right)
	{
		total2 = total2 + a[loop2];
	}
	printf("%d", total2);
	printf("\n");
}
