#include "main.h"
/**
 * print_rev - imprime en reversa
 * @x: string
 * return: 0
 */
void print_rev(char *x)
{
	int longi = 0;
	int i;

	while (*x != '\0')
	{
		longi++;
		x++;
	}
	x--;
	for (i = longi; i > 0; i--)
	{
		_putchar(*x);
		x--;
	}

	_putchar('\n');
}
