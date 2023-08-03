#include "main.h"
/**
 * swap_int - main function
 * @a: first param
 * @b: second param
 *
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
