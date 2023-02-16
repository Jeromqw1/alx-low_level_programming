#include <stdio.h>

/**
 * main - Entry Point of the program
 * Return - Always 0 (success)
 */

int main(void)
{
	 printf("Size of a char: %ld byte(s)\n", sizeof(char));
	 printf("Size of a int: %ld byte(s)\n", sizeof(int));
	 printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	 printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	 printf("Size of a float: %ld byte(s)\n", sizeof(float));
	 printf("Size fo a double: %ld byte(s)\n", sizeof(double));
	 printf("Sizes of a long double: %ld byte(s)\n", sizeof(long double));
	 return (0);
}
