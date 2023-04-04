#include "lists.h"

/**
* print_listint - prints all the elements fo a listint_t list.
* @h: A pointer to the head of the listint_t list
* @n: points to the number of integers
* Return: The number of nodes in the listint_t list.
*/
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
