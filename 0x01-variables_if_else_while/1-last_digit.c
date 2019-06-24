/** this is a short description for a program */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - takes unspecificed number of arguments and returns value on
 * Description: longer things about the main function
 * Return: 0
 */

int main(void)
{
	int n;
	int r = (n % 10);

	srand(time(0));
	n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d ", n, r);
	if (r > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (r == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
