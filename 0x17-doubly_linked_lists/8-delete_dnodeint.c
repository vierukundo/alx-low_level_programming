#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * @head: header pointer
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head, *temp_next, *temp_prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (h->prev == NULL && h->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	for (i = 0; h != NULL; i++)
	{
		if (i == index && index != 0 && h->next)
		{
			temp_next = h->next;
			temp_prev = h->prev;
			temp_prev->next = temp_next;
			temp_next->prev = temp_prev;
			return (1);
		}
		else if (i == index && index == 0)
		{
			temp_prev = h->next;
			temp_prev->prev = NULL;
			h->next = NULL;
			*head = temp_prev;
			return (1);
		}
		else if (i == index && i != 0 && h->next == NULL)
		{
			temp_prev = h->prev;
			h->prev = NULL;
			temp_prev->next = NULL;
			return (1);
		}
		h = h->next;
	}
	return (-1);
}
