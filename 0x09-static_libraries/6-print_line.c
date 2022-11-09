#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times to print
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int a;

	a = 0;
	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
