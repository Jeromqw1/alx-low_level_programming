#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index, starting from 0, of the bit to get
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;
	unsigned long int input_number = n;

	if (input_number == 0 && index < 64)
		return (0);
	for (x = 0; x <= 63; input_number >>= 1)
	{
		if (index == x)
			return (input_number & 1);
	}
		{
			return (n & 1);
		}
	return (-1);
}
