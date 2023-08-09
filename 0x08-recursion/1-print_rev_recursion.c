#include "main.h"
/**
 * _print_rev_recursion - name of func
 *
 * @s: string param
 * Return: void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _print_rev_recursion(s + 1));
}
