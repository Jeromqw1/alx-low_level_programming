#include <stdio.h>
#include <math.h>
/**
 * main - finds and and prints the largest factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int x;

	n = 12852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (x = 3; x <= sqrt(n); x = x + 2)
	{
		while (n % x == 0)
		{
			max = x;
			n = n / x;
		}
	}
	if (n > 2)
	{
		max = n;
		printf("%ld\n", max);
	}
	return (0);
}
