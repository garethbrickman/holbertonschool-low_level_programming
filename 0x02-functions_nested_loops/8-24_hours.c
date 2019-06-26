#include "holberton.h"
/**
 * jack_bauer - void jack_bauer(void) function writes every minute of
 *  hh:mm period
 *
 * @void: void
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int ho, mi;

	for (ho = 00; ho < 24; ho++)
	{
		for (mi = 00; mi < 60; mi++)
		{
			if (ho < 24 && mi < 60)
			{
				_putchar((ho / 10) + '0');
				_putchar((ho % 10) + '0');
				_putchar(':');
				_putchar((mi / 10) + '0');
				_putchar((mi % 10) + '0');
				_putchar('\n');
			}
		}
	}
/*	return (0);*/
}
