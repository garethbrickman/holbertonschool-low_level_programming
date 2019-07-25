#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - function prints the opcodes of its own main function
 *
 *@argc: int
 *@argv: * pointer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
