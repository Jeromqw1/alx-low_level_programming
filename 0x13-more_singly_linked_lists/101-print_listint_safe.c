#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *turtle;
	listp_t *hare;

	if (head != NULL)
	{
		hare = *head;
		while ((turtle = hare) != NULL)
		{
			hare = hare->next;
			free(turtle);
		}
		*head = NULL;
	}
}
/**
 * free_listint_safe - frees a linked list.
 * @h: pointer to the head of the list.
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnode = 0;
	listp_t *current, *new, *add;

	current = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			free_listp(&current);
			exit(98);
		}
		new->p = (void *)*h;
		new->next = current;
		current = new;

		add = current;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				free_listp(&current);
				*h = NULL;
				return (nnode);
			}
		}
	}
	*h = (*h)->next;
	free(new->p);
	free(new);
	nnode++;
}
