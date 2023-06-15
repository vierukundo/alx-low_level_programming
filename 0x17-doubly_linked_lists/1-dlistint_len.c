#include "lists.h"
/**
 * dlistint_len - function that returns the
 * number of elements in a linked dlistint_t list
 * @h: header pointer
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
