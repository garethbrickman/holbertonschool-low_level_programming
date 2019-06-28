#include "holberton.h"
/**
 * more_numbers - function outputs digits 0-14 ten times
 *
 *
 * Return: 0
 */
void more_numbers(void)
{
	int num, col;

	for (col = 0; col <= 10; col++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	}
}
/*	return (void);  */
