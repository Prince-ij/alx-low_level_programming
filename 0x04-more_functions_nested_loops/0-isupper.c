#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
