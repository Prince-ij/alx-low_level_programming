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
	int i;
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
		if (a == z + 1)
			break;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
