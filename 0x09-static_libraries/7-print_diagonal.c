#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: int
 * Return: 0 Success
 */
void print_diagonal(int n)
{
	int a,i;

	a = 0;
	while (a < n && a > 0)
	{
		i = 0;
		while (i < a)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
	_putchar('\n');
}
