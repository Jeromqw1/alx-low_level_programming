#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from z to 98,
 * followed by a new line
 * @z: print from this number
 */
void print_to_98(int z)
{
	int x, y;

	if (z <= 98)
	{
		for (x = z; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	} else if (z >= 98)
	{
		for (y = z; y >= 98; y--)
		{
			if (y != 98)
				printf("%d, ", y);
			else if (y == 98)
				printf("%d\n", y);
		}
	}
}

