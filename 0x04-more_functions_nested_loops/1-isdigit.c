#include "main.h"
/**
 * _isdigit - Functio to check for digit
 *
 * @c: integr to be checked
 * Return: 1 if successful otherwise 0
 */
int _isdigit(int c)
{
	if (c  >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
