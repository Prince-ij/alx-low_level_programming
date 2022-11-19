#include "variadic_functions.h"
/**
 * print_numbers - functuon
 * @separator: blah
 * @n: blah
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	unsigned int i;

	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lis, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lis);
}
