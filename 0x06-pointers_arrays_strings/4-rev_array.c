#include "main.h"
/**
 * reverse_array - Entry point
 * @a: first param
 * @n: second param
 * Return: void
 */
void reverse_array(char *a, int n)
{
	int i, b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
