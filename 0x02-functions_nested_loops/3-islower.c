#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower char
 * @c: an integer
 * Return: 0 success
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
