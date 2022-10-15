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
	putchar('\n');
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
	return (0);
}
