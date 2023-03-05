#include "main.h"
/**
 * _memcpy - a funtion that copies memory area
 * @dest: memory where it is to be stored
 * @src: memory where it will be copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = 0;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
