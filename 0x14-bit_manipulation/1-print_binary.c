#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift = 1;
	int x, flag = 0;

	/* Find the most significant bit */
	for (x = 63; x >= 0; x--)
	{
		if ((n >> x) & 1)
		{
			flag = 1;
			break;
		}
	}

	/* Print the binary representation */
	if (flag)
	{
		for (; x >= 0; x--)
		{
			if ((n >> x) & shift)
				_putchar('1');
			else
				_putchar('0');
		}
	}
	else
	{
		_putchar('0');
	}
}

