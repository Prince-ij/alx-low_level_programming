#include "main.h"
/*
 * print_array - Entry point
 * @a: array param
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (i > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
