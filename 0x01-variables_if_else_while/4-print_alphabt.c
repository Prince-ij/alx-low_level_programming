#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 SUCCESS
 */

int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		if ((small != 113) && (small != 101))
		{
			putchar(small);
		}
		small++;
	}
	putchar('\n');

	return (0);
}
