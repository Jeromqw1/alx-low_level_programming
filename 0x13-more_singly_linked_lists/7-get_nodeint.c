#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked lists.
* @head: pointer to the first node of the list
* @index: index of the node to retrieve, starting at 0
* Return: pointer to the nth node of the list, or the NULL if the node doesn't
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
