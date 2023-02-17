#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of my program on positive, zero and negative number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*prints negative, positive and zero numbers*/
	if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else 
	{
		printf("%d is Negavtive\n", n);
	}
	return (0);
}
