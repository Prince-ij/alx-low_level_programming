#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if char is leyter
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c <='z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
