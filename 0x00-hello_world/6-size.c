#include <stdio.h>

/**
 * main - Entry Point of the program
 * Return - Always 0 (success)
 */

int main(void)
{
	 printf("Size of a char: %zu byte(s)\n", sizeof(char));
	 printf("Size of a int: %zu byte(s)\n", sizeof(int));
	 printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	 printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	 printf("Size of a float: %zu byte(s)\n", sizeof(float));
	 printf("Size fo a double: %zu byte(s)\n", sizeof(double));

	 return (0);
}
