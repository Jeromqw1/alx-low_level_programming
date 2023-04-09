#include "main.h"
/**
* clear_bit - Sets the value of a bit to 0 at a given index
* @n: Pointer to the number
* @index: Index of the bit to clear
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) // check if index is within range
        return -1;

    unsigned long int mask = 1UL << index; // create a mask with a 1 at the index position
    mask = ~mask; // negate the mask to have a 0 at the index position

    *n &= mask; // clear the bit at the index position

    return 1;
}

