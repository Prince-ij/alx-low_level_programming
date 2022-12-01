#include "main.h"

/**
 * get_bit - function
 * @n: param
 * @index: para.
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
