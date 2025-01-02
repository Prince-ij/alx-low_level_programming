#include "main.h"
/**
 * print_last_digit - func name
 *
 * @n: digit
 *
 * Return: int
 */

int print_last_digit(int n)
{
	if (n > 1)
	{
		return (n % 10);
	}
	else if (n < 1)
	{
		n *= -1;
		return (-(n % 10));
	}
	else
		return (0);
}
