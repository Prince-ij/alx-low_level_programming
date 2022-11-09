#include "main.h"
/**
 * print_triangle - a subroutine
 * @size: int
 * Return: void
 */
void print_triangle(int size)
{
	int i, ii;

	i = 1;
	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - 1)
		{
			_putchar(' ');
			ii++
		}
		ii = 0;
		while (ii < 1)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}

