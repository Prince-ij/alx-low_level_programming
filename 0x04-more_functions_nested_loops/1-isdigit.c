#include "main.h"
/**
 * _isdigit - main function
 * @c: param
 * Return: int
 */
int _isdigit(int c)
{
	if (c <= 57 || c >= 48)
		return (1);
	else
		return (0);
}
