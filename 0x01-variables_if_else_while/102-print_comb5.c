#include <stdio.h>
/**
 * main - prints all possible combinations
 * of two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, j;

	for (x = 0; x < 100; x++)
	{
		for (j = 0; j < 100; j++)
		{
			if (x < j)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (x != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
