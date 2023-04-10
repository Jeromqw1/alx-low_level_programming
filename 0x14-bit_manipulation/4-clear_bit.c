#include "main.h"
/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: Pointer to the number
* @index: Index of the bit to clear
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~bitmask);
			return (1);
	}
	return (-1);
}
