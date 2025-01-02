#include "main.h"
/**
 * print_alphabet - as the name suggests
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		_putchar(small);
		small++;
	}
	_putchar('\n');
}
