#include "main.h"
/**
 * times_table - Entry point
 * Return: void
 */
void times_table(void)
{
	int digit, mult, res;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			res = digit * mult;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
