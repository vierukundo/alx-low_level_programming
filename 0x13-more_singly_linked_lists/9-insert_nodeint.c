#include "lists.h"
/**
 * insert_nodeint_at_index - a function
 * that inserts a new node at a given position.
 * @head: pointer to first node
 * @idx: index to insert new node
 * @n: node data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *h = *head, *new, *next;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		return (new);
	}
	while (h)
	{
		if (i == idx - 1)
		{
			next = h->next;
			h->next = new;
			new->next = next;
			return (new);
		}
		h = h->next;
		i++;
	}
	return (NULL);
}
