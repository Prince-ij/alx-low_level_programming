#include "main.h"
/**
 * print_to_98 - func name
 * @n: start point
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 0)
		{
			printf("%d", n);
		}
		if (n < 10)
			_putchar('0' + n);
		else
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		 _putchar('0' + n / 10);
		 _putchar('0' + n % 10);
		 _putchar(',');
		 _putchar(' ');
		 n--;
	}
	_putchar('\n');
}
