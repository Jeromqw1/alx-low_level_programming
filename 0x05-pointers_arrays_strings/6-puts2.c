#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int x = 0;
	char *z = str;
	int i;

	while (*z != '\n')
	{
		z++;
		longi++;
	}
	x = longi - 1;
	for (i = 0; i <= x; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
