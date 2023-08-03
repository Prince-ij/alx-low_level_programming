#include "main.h"
/**
 * print_most_numbers - main function
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			putchar('0' + i);
	}
	putchar('\n');
}
