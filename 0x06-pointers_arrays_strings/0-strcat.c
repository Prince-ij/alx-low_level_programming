#include "main.h"
/**
 * _strcat - function that joins strings together
 * @src: first param
 * @dest: second param
 * Return: dest
 */
char *_strcat(char *src, char *dest)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

