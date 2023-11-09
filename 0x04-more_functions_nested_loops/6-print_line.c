#include "main.h"
/**
 * print_line - print a [_] to the stdout
 *
 * @n: number of [_] to be printed
 * Return: void
 */
void print_line(int n)
{
	while (n)
	{
		if (n == 0)
			_putchar('\n');
		else if (n < 0)
		{
			break;
		}

		else
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
