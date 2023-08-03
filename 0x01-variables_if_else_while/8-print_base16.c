#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return:  Always 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
