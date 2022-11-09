#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower char
 * @c: an integer
 * Return: 0 success
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
