#include "main.h"
#include <unistdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On sucess one.
 * On error, -q is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

