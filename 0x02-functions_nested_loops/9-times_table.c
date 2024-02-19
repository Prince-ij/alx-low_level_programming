#include "main.h"
/**
 * times_table - function name
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	p = i * j;
	if (p > 9)
	{
		_putchar(p / 10 + '0');
		_putchar(p % 10 + '0');
	}
	else
	{
		if (j != 0)
		{
		_putchar(' ');
		}
		_putchar(p + '0');
	}
	if (j != 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
	}
}

