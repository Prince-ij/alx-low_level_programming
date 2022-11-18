#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - functions ti print
 * @n: param
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
