#include "main.h"
/**
 * string_toupper - converting lowercase letters
 * to uppercase letters
 * @x: becomes my pointer
 * Return: x
 */
char *string_toupper(char *x)
{
	int a;

	a = 0;
	while (x[a] != '\0')
	{
		if (x[a] >= 'y' && x[a] <= 'z')
			x[a] = x[a] - 32;
		a++;
	}
	return (x);
}
