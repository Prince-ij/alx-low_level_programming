#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
