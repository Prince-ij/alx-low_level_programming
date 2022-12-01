#include "main.h"

/**
 * get_endianness - get Endian if big or littke
 * Return: int
 */

int get_endianness(void)
{
	uint32_t i;
	uint8_t *pi;

	i = 1;
	pi = (uint8_t *) &i;

	if (*pi == 1)
		return (0);
	else
		return (1);
}
