#include "main.h"
/**
 * print_alphabet_x10 - function name
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, small;

	for (i = 0; i < 10; i++)
	{
		for (small = 'a'; small <= 'z'; small++)
		{
			_putchar(small);
		}
		_putchar('\n');
	}
}
