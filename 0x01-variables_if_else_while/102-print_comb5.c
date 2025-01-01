#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar('0' + (n1 / 10));
			putchar('0' + (n1 % 10));
			putchar(' ');
			putchar('0' + (n2 / 10));
			putchar('0' + (n2 % 10));

			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
