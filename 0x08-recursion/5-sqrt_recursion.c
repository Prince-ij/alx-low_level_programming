#include "main.h"
/**
 * sqrt - function helper
 * @n: param
 * @x: guess
 * Return: int
 */
int sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	x++;
	return (sqrt(n, 1));
}
/**
 * _sqrt_recursion - function name
 * @n: param
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (sqrt(n, 1));
}
