#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of the node to be deleted
 * Return: 1 if succeed or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *d;

	unsigned int i = 0;

	if (index == 0 && h)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
		return (1);
	}
	while (h)
	{
		if (i == index - 1)
		{
			d = (h)->next->next;
			free((h)->next);
			(h)->next = d;
			return (1);
		}
		h = (h)->next;
		i++;
	}
	return (-1);
}
