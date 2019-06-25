#include "holberton.h"
/**
 * print_alphabet_x10 - takes unspecificed number of arguments, returns value
 * Description: longer things about the print_alphabet_x10 function
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int num;
	int al;

	for (num = 0; num <= 9; num++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
