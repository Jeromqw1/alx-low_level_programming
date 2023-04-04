#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - insert a new node at a given position.
* @head: points to a pointer to the head of the list.
* @idx: index is where the new node should be inserted.
* @n: data for the new node.
* Return: address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
			return (new_node);
	}

	current_node = *head;
	for (x = 0; x < idx - 1; x++)
	{
		if (current_node == NULL)
		{
			free(new_node);
				return (NULL);
		}
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		free(new_node);
			return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
