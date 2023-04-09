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
	unsigned long int bit_mask;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit_mask = 1UL << index;

	if ((n & bit_mask) == 0)
		return (0);
	else
		return (1);
}
/**
* main - entry point
* Return: always 0
*/
int main(void)
{
	unsigned long int n = 0x5A5A5A5A5A5A5A5A;
	int bit_value;

	bit_value = get_bit(n, 3);
	printf("Value of bit at index 3: %d\n", bit_value);
	bit_value = get_bit(n, 8);
	printf("Value of bit at index 8: %d\n", bit_value);
	bit_value = get_bit(n, 63);
	printf("Value of bit at index 63: %d\n", bit_value);
	return (0);
}

