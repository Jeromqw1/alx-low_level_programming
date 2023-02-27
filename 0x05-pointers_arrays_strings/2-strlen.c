#include "main.h"
/**
 * _strlen - returns the length of a string
 * @i: string
 * Return: length
 */
int _strlen(char *i)
{
	int longi = 0;

	while (*i != '\0')
	{
		longi++;
		i++;
	}

	return (longi);
}
