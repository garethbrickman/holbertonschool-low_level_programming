#include "holberton.h"
/**
 * print_alphabet_x10 - takes unspecificed number of arguments and returns value
 * Description: longer things about the print_alphabet_x10 function
 * Return: 0
 */
void print_alphabet_x10(void)
{
	for (int num = 0; num <= 9; num++)
	{
		for (int al = 'a'; al <= 'z'; al++)
		{
			putchar(al);
		}
		putchar('\n');
	}
}
