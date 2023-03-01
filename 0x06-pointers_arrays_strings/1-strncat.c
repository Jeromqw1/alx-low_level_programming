#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most bytes n from src
 * @dest: inputs value
 * @src: inputs value
 * @n: inputs value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (dest[y] != '\0')
	{
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
