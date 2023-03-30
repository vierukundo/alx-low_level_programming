#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer to the node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
