#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point
 * Return: void
 */
int main(void)
{
	int ascii = 2772, i = 0, j, random;
	char passwd[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 26)
	{
		random = rand() % 126;
		passwd[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		passwd[i] = ascii;
	else
	{
		i--;
	}
	for (j = 0; j <= i; j++)
	{
		printf("%c", passwd[j]);
	}
	return (0);
}
