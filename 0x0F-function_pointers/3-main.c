#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - function performs simple operations
 *
 *@argc: int number of arguments
 *@argv: char * pointer to input ints
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", answer);
	return (0);
}
