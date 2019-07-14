#include "holberton.h"
#include<stdio.h>
/**
 * main - function prints all arguments it receives
 *
 *@argc: int
 *@argv: char * pointer to array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
