#include "lists.h"
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to first node
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->n)
			elements++;
		h = h->next;
	}
	return (elements);
}
