#include "main.h"
/**
 * more_numbers - func name
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar('0' + (j > 9 ? j / 10 : j));
			if (j > 9)
			{
				_putchar('0' + j % 10);
			}
		}
		_putchar('\n');
	}
}
