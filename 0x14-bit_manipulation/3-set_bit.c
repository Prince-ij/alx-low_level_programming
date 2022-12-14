#include "main.h"

/**
 * set_bit - function
 * @index: position
 * @n: param
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
