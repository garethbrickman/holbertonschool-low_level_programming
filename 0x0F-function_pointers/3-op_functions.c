#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - function adds 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtracts 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiplies 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divides 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function moduluses 2 ints
 *
 *@a: int number
 *@b: int number
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
