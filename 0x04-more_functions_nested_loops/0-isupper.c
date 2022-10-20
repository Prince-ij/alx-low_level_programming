#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
