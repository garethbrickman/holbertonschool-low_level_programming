/** this is a short description for a program to print plain text/file size */
#include<stdio.h>
/**
 * main - takes unspecificed number of arguments and returns value on
 * Description: longer things about the main function
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	double d;
	float f;

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf(" byte(s)\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(d));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	printf(" byte(s)\n");

	return (0);
}
