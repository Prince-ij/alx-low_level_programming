#include "function_pointers.h"
/**
 * print_name - function
 * @f: dtg
 * @name: pint out
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
