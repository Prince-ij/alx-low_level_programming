#include "variadic_functions.h"
/**
 * print_char - function
 * @arg: argument
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - functiom
 * @arg: argument
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%i", num);
}
/**
 * print_float - function
 * @arg: argumrnt
 */
void print_float(va_list arg)
{
	double num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - function
 * @arg: argument
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - func
 * @format: param
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	int j = 0;

	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	while (format && (*(format + 1)))
	{
		j = 0;
	while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		j++;
	if (j < 4)
	{
		printf("%s", separator);
		funcs[j].print(args);
		separator = ", ";
	}
	i++;
	}
	printf("\n");
	va_end(args);
}
