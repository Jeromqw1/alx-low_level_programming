#include "main.h"
/**
 * print_most_numbers - checks for a digit (0 through to 9)
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 50)
		{
			if (x != 52)
			{
				_putchar(x);
			}
		}
	}
	_putchar('\n');
}
