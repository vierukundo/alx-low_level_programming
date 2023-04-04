#include "lists.h"
/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list
 * @head: pointer to first of node
 * @index: nth node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;

	unsigned int i = 0;

	while (h)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
