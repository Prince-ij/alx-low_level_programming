#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char buffer[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";

	write(1, &buffer, strlen(buffer));
	return (1);
}
