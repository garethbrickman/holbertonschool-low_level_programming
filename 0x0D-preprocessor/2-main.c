#include<stdio.h>
#include<string.h>
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/')\
+ 1 : __FILE__)
/**
 * main - function prints name of file it is compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILENAME__);
	return (0);
}
