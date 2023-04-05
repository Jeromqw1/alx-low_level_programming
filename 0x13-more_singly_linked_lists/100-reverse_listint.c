#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to pointer of the head node.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	next = (*head)->next;
	while (next)
	{
		(*head)->next = prev;
		prev = *head;
		*head = next;
		next = (*head)->next;
	}
	(*head)->next = prev;

	return (*head);
}

