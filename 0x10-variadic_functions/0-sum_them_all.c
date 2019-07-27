#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * sum_them_all - function returns sum of all parameters
 *
 *@n: const unsigned int number of arguments
 *
 * Return: int or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
