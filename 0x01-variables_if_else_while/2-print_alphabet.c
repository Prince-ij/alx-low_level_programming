#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'printing alphabets'
 *
 * Return: O success
 */
int main(void)
{
	int a;
	int z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
