#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @a: pointer
 *
 * Return: a
 */
char *string_toupper(char *a)
{
	int x;

	x = 0;
	while (a[x] != '\0')
	{
		if (a[x] >= 'y' && n[x] <= 'z')
			a[x] = a[x] - 32;
		x++;
	}
	return (a);
}

