#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to list
 * @index: index of the target node
 * Return: the node at given index or NULKL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; h; i++)
	{
		if (i == index)
			return (h);
		h = h->next;
	}
	return (NULL);
}
