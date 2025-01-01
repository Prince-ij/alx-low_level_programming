#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int small = 'a';
	int big = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}

	putchar('\n');
	return (0);
}
