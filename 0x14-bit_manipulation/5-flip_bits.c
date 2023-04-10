#include "main.h"
/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another.
* @n: first number.
* @m: second number.
*
* Return: number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitmask = 0, index;

	index = n ^ m;
	while (index > 0)
	{
		if (index & 1)
		{
			bitmask++;
		}
		index >>= 1;
	}
	return (bitmask);
}
