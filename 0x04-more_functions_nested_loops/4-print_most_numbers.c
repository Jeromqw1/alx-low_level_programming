#include "main.h"
/**
 * print_most_numbers - checks for a digit (0 through to 9)
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2)
		{
			if (x != 4)
			{
				_putchar(x);
			}
		}
	}
	_putchar('\n');
}
