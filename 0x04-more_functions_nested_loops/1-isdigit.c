#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 * @c: an int
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
