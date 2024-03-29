#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: points to the head of the list
* @n: integer value to be stored in a new node
* Return: address of a new element, or NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
	current->next = new_node;
	}
	return (new_node);
}
