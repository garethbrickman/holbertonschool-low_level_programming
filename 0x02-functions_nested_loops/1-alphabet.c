#include "holberton.h"
/**
 * print_alphabet - takes unspecificed number of arguments and returns value
 * Description: longer things about the print_alphabet function
 * Return: 0
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
