#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	int nodes;

	if (head == NULL)
		return (0);
	for (nodes = 0; head != NULL; nodes++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return (nodes);
}
