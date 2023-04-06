#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - prints a linked list of integers, even if it has a loop.
* @head: points to the head of the list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *turtle, *hare;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	turtle = head;
	hare = head;

	while (turtle && hare && hare->next)
	{
		turtle = turtle->next;
		hare = hare->next->next;

	if (turtle == hare)
	{
		printf("-> [%p] %d\n", (void *)turtle, turtule->n);
		count++;
		break;
	}
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		count++;
	}
	if (turtle == NULL || hare == NULL || hare->next == NULL)
	{
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		count++;
	}

	turtle = turtle->next;
	while (turtle != hare)
	{
		printf("[%p] %d\n", (voide *)turtle, turtle->n);
	count++;
	turtle = turtle->next;
	}
	printf("-> [%P] %d\n", (void *)turtle, turtle->n);
	count++;
	return (count);
}
