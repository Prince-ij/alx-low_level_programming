#include "main.h"
/**
 * print_to_98 - print numbers
 * @n: int param
 * Return: void
 */
void print_to_98(int n)
{
	printf("%d", n);
	while (n != 98)
	{
		printf(", ");
		n += (n < 98) ? 1 : -1;
		printf("%d", n);
	}
	putchar("\n");
}
