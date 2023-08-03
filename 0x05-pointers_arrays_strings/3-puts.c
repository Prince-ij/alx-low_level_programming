#include "main.h"
/**
 * _puts - main function
 * @str: string patam
 * Return: void
 */
void _puts(char *str)
{
	while (*(str++))
	{
		printf("%c",str);
	}
	_putchar('\n');
}
