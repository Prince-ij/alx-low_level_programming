#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - main
 * @n: param
 * Return: void
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - main
 * @n: param
 * @i: param2
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
