#include "holberton.h"

/**
 * _strspn - function gets length of prefix substring
 *
 *@s: char * pointer
 *@accept: char * pointer
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int loop1 = 0;
	int loop2 = 0;
	int next = 0;

	while (*(s + loop1))
	{
		while (*(accept + loop2))
		{
			if (*(accept + loop2) == *(s + loop1))
			{
				byte++;
			}
			if (*(accept + (loop2 + 1)) == *(s + (loop1)))
			{
				next = 1;
			}
			loop2++;
		}
			if (next != 1)
			{
				break;
			}
			else if (next == 1)
			{
				next = 0;
			}
			loop1++;
			loop2 = 0;
				}
	return (byte);
}
