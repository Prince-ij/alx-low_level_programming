#include "main.h"
/**
 * _putchar - prototype to regular putchat
 * @c: param to be printed
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
