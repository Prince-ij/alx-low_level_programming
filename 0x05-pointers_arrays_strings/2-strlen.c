#include "main.h"
/**
 * _strlen - main function
 * @s: char parm
 * Return: Always inr 1 or 0
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s++))
		count++;
	return (count);
}
