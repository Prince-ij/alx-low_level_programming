#include <limits.h>
#include "main.h"
/**
 * print_last_digit - main function
 * @n: int parameter
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int r, u;

	if (n == INT_MIN)
	{
		r = (n - 1) + 1;
		u = (unsigned int) r % 10;
		_putchar('0' + u);
		return (u);
	}
	else
	{
		r = n > 0 ? n % 10 : (n * -1) % 10;
		_putchar('0' + r);
		return (r);
	}
}
