#include "holberton.h"
#include<stdio.h>
/**
 * main - function multiplies two numbers
 *
 *@argc: int
 *@argv: char * pointer to array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int multi = 0;

	if (argc == 3)
	{
		multi += atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
