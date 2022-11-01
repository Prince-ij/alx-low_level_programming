#include "main.h"
/**
 * putchar
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
