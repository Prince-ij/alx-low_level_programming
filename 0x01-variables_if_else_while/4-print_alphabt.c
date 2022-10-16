#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: 'task 4'
 *
 * Return: Always 0
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
