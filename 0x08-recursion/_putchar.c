#include <stdio.h>
/**
 * _putchar - A regular functiom
 * Return: int
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 2));
}
