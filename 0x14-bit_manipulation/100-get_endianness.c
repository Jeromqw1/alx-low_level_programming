#include "main.h"
/**
* get_endianness - check for the endianness of the system
* Return: 0 if it big endain,  1 if it is little endian.
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
