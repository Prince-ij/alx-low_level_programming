#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times to print
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int y;

	for (y = 0; y <= n; y++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
