#include "main.h"
/**
 * print_triangle - func name
 * @size: int param
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
		_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
