#include "main.h"
/**
 * print_to_98 - func name
 * @n: start point
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else {
			printf("%d, ", n);
		}
		n--;
	}
	}
	else 
	{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else {
			printf("%d, ", n);
		}
		n++;
	}
	}
}
