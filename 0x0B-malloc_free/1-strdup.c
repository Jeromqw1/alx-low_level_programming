#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strup - duplicating to new memory space location
 * @str: char
 * Return: 0
 */
char *_strup(char *str)
{
	char *aaa;
	int x, r = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	aaa = malloc(sizeof(char) * (x + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
