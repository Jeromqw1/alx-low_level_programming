#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked and returns
* its data;
* @head: pointer to a pointer to the first node of the list.
* Return: the data of the deleted node, or 0 if the list it empty.
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
