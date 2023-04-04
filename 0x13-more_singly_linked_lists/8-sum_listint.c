#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - returns the sum of
* all the data (n) of the linstint_t linked list
* @head: pointer to the first node of the list.
* Return: the sum of all the data of the list, or 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
