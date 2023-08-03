#include "main.h"
/**
 * jack_bauer - main functions
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 10; j++)
			for (k = 0; k < 6; k++)
				for (l = 0; l < 10; l++)
				{
					if (i > 1 && j > 3)
						break;
					putchar('0' + i);
					putchar('0' + j);
					putchar(':');
					putchar('0' + k);
					putchar('0' + l);
					putchar('\n');
				}
}
