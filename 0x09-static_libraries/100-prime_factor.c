#include <stdio.h>
/**
 * main - Entry pount
 *
 * Return: Alwaus 0 
 */
int main(void)
{
	long num, divisor, larg_prim;

	num = 612852475143;
	divisor = 2;
	larg_prim = 0;
	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
