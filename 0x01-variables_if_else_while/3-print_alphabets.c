#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabets'
 *
 * Return: 0 success
 */
int main(void)
{
	int a;
	int z;
	int A;
	int Z;

	a = 'a';
	z = 'z';
	A = 'A';
	Z = 'z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
		if (A == Z)
			break;
	}
	putchar('\n');
	return (0);
}
