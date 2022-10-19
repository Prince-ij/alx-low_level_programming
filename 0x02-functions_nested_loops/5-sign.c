#include <stdio.h>
#include "main.h"
/**
 * print_sign - blah blah blah
 * @n: an integer
 * Return: 0;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	
	else
	{
		putchar('-');
		return (-1);
	}
}
