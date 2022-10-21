#include <unistd.h>
/**
 * _putchar - helper function
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
