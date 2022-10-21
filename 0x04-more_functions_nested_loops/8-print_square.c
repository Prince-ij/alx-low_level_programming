#include "main.h"
/**
 * iprint_diagonal - Entry point
 * @size: an int
 * Return:always success 0
 */
void print_square(int size)
{
	int a, y;

	a = 0;
	while (a < n && a > 0)
	{
		y = 0;
		while (n < 10)
		{
			_putchar('#');
			y++;
		}
		_putchar('_');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
