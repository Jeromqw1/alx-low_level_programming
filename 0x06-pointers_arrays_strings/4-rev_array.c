#include "main.h"
/**
 * reverse_array - reverses integers of arrays
 * @a: is the array
 * @n: is the number of integers
 * Return: Always 0 success
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
