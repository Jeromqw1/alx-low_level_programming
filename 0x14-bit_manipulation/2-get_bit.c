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
	unsigned long int bitmask = 1;

	if (index > sizeof(n) * 8)
	{
		return  (-1);
	}
	bitmask <<= index;
	if (bitmask & n)
		return (1);
	else
		return (0);
}
