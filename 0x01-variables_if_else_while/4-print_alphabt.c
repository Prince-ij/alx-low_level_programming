#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: 'print alphabt task'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int z;

	a = 'a';
	z = 'z';
	for (; a <= z; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
			continue;
		}
	}
	putchar('\n');
	return (0);
}
