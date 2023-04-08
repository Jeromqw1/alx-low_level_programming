#include <unistd.h>

/**
 * _putchar - writes characters to stdout
 * @c: The character to print
 * Return: it's success is 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

