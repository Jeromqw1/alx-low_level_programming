#include <stdio.h>
#include <math.h>
/**
 * main - finds and and prints the largest factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long x, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}
	printf("%ld\n", max);
	return (0);
}
