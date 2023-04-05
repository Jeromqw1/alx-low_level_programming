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
/*prev: means previous*/
/*n: means next*/

	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
