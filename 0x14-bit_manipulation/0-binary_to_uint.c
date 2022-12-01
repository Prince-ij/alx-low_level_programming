#include "main.h"

/**
 * binary_to_uint - function that converts binary to int decimal
 * @b: binary as parameter char *
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (!check_valid_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (0);
}

/**
 * check_valid_string - helper functikn
 * @b: param
 * Return: void
 */

int check_valid_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
