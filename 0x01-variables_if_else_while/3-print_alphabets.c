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
	for (; a <= z; a++)
	{
		putchar(a);
	}

	for (; A <= Z; A++)
	{
		putchar(A);
	}
	return (0);
}
