#include "holberton.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - function prints minimum number of coins to make change
 *
 *@argc: int
 *@argv: char * pointer to array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(*(argv + 1));
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents / 1;
		printf("%d\n", coins);
	}
	return (0);
}
