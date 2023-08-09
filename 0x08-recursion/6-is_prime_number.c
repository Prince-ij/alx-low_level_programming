#include "main.h"
/**
 * prime - helper function
 * @n: param
 * @divisor: paramtwo
 * Return: int
 */
int prime(int n, int divisor)
{
	if (n <= 1)
		return 0;
	if (divisor > _sqrt_recursively(n))
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime(n, divisor + 1));
}
/**
 * _is_prime_number - function
 * @n: param
 * Return: int
 */
int _is_prime_number(int n)
{
	return (prime(n, 2));
}
