#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always Success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			for (k = 0; k < 10; k++)
			{
				if (j <= i || k <= j)
					continue;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i < 7)
				{
				putchar(',');
				putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
