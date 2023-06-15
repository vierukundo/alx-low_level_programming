#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer to list
 * @idx: index of node
 * @n: element of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new, *temp;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	if (h == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}
	for (index = 0; head != NULL; index++)
	{
		if (index == idx && head->prev)
		{
			temp = head->prev;
			temp->next = new;
			new->prev = temp;
			new->next = head;
			head->prev = new;
			return (new);
		}
		else if (idx == index && head->prev == NULL)
		{
			new->next = head;
			head->prev = new;
			return (new);
		}
		head = head->next;
	}
	return (NULL);
}
