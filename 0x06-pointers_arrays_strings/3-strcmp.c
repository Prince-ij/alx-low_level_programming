#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: first param
 * @s2: second param
 * Return: void
 */
int *_strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		res = *s1 - *s2;
	return (res);
}
