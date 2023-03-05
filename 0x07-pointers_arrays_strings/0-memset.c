#include "main.h"
/**
 * _memset - function to fill to memory
 * @n: integer to convert
 * @s: address of the memory to fill
 * @b: the value desired
 * Return: array to changer with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
