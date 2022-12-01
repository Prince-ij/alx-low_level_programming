#include "main.h"

/**
 * get_endianness - get Endian if big or littke
 * Return: int
 */

int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
