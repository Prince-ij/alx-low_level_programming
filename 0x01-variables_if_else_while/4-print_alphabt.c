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
	while (a <= z)
	{
		
		if (a != 'q' && a != 'e')
		{	
			putchar(a);
			a++;
			continue;
		}
	}
	return (0);
}
