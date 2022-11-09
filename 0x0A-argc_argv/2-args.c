#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: Always 0 Success
 */
int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
