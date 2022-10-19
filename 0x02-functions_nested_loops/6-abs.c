#include <stdio.h>
#include "main.h"
/**
 * _abs - returns absolute value
 * @n: an integer
 * Return: 0 success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
