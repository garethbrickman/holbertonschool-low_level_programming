/** this is a short description for a program to print plain text/file size */
#include<stdio.h>
/**
 * main - takes unspecificed number of arguments and returns value on
 * Description: longer things about the main function
 * Return: 0
 */
int main(void)
{
	int al;
	int am;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	for (am = 'A'; am <= 'Z'; am++)
		putchar(am);
	putchar('\n');

	return (0);
}
