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
		if (a == Z + 1)
			break;
	}

	for (; A <= Z; A++)
	{
		putchar(A);
		if (A == Z)
			break;
	}
	return (0);
}
