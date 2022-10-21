#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int r, i;

	for (r = 0; r <= 10; r++)
	{
	for (i = 0; i <= 14; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	}
}
