#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: parameter for function of chartype
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i  = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
