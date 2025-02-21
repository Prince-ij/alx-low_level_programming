#include "main.h"
/**
 * jack_bauer - main
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
			for (l = 0; l < 10; l++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(':');
				putchar('0' + k);
				putchar('0' + l);
				putchar('\n');
			}
			}
		}
	}
}
