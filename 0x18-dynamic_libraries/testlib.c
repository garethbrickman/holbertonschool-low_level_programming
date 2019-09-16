#include<stdlib.h>
#include<stdio.h>

/**
 * add - function adds 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function subtracts 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function multiplies 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - function moduluses 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
