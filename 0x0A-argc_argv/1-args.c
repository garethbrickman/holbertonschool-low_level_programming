#include "holberton.h"
#include<stdio.h>
/**
 * main - function prints number of args passed in it
 *
 *@argc: int
 *@argv: char * pointer to array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int countargc = (argc - 1);

	printf("%d\n", countargc);
	return (0);
}
