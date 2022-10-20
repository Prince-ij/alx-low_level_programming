#include "main.h"
/**
 * _isdigit - Entry point
 * @c: an int
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
