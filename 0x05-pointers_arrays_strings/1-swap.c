#include "main.h"
/**
 * swap_int - Entry lpoint
 * @a: 1 int
 * @b: 2 int
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
