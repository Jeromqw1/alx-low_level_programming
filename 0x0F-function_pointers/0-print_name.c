#include <stdio.h>
/**
 * print_name - prints a name using a function
 * @name: Points to a string
* Return: nothing
 */
void print_name(char *name)
{
	if (name != NULL)
	{
		printf("%s\n", name);
	}
	else
	{
		printf("Name not printed\n");
	}
}
