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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, (n % 10));
	if ((n % 10) > 5)
		printf("and is greater than 5\n");
	if ((n % 10) == 0)
		printf("and is 0\n");
	if ((n % 10) <= 6)
		printf("and is less than 6 and not 0\n");

	return (0);
}
