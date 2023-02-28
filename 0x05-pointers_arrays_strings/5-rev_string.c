#include "main.h"

/**
 * rev_string - Reverses a string
 * @x: Input string
 * Return: String in reverse
 */
void rev_string(char *x)
{
	char rev = x[0];
	int counter = 0;
	int z;

	while (x[counter] != '\0')
		counter++;
	for (z = 0; z < counter; z++)
	{
		counter--;
		rev = x[z];
		x[z] = x[counter];
		x[counter] = rev;
	}
}

