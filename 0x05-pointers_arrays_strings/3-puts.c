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
		if (i != '\0')
			break;
		else
			_putchar(s[i]);
			i++;
	}
	_putchar('\n');
}
