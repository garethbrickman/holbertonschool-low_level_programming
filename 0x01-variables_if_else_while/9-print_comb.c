#include<stdio.h>
/**
 * main - takes unspecificed number of arguments and returns value on
 * Description: longer things about the main function
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num <= '0')
		{
			putchar(num);
		}
		else if (num > '0')
		{
			putchar(',');
			putchar(' ');
			putchar(num);
		}
	}
	return (0);
}
