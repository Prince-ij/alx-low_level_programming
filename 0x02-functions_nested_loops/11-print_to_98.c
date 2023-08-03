#include "main.h"
/**
 * print_to_98 - main function
 * @n: int param
 * Return: void
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			if (i > 97)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

		if ( n > 98)
		{
			for (i = n; n > 98; i--)
			{
				putchar('0' + i);
				if (i < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			putchar('\n');
		}
}
