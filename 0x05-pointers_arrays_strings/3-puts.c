#include "main.h"
/**
 * _puts - Entry point
 * @str: parameter type char
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
