#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			for (k = 0; k < 10; k++)
				for (l = 0; l < 10; l++)
				{
				if (i * 10 + j >= k * 10 + l)
					continue;
				putchar('0' + i);
				putchar('0' + j);
				putchar(' ');
				putchar('0' + k);
				putchar('0' + l);
				if (i * 10 + j < 98)
				{
				putchar(',');
				putchar(' ');
				}
				}
	putchar('\n');
	return (0);
}
