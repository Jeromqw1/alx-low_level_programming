#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - add a new node at the beginning of a listint_t list.
* @head: pointer to the head of the listint_t list.
* @n: integer to be stored in the new node
* Return: should the function fails - NULL.
*	Otherwise - a pointer to the new element.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
