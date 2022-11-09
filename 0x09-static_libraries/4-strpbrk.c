#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: -
 * @accept: +
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
