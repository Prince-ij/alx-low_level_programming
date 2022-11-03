#include "main.h"
/**
 * _strlen_recursion - func
 * @s: param
 * Return: recursiom
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
