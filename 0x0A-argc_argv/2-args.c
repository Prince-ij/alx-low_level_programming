#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: Always 0 Successa
 */
int main(int argc, char **argv)
{
	for (int i = 1; i <= argv[argc - 1]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
