#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char small = 'z';

	while (small >= 'a')
	{
		putchar(small);
		small--;
	}
	putchar('\n');

	return (0);
}
