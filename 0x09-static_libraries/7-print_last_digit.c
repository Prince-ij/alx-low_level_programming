#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: int
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
