#include "main.h"
/**
 * _strlen_recursion - function name
 * @s: char paeam
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	static int arg;

	arg = 0;
	if(*s == '\0')
		return (0);
	else
	{
	arg += 1;
	_strlen_recursion(s + 1);
	return (arg);
	}
}
