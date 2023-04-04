#include "lists.h"
/**
 * add_nodeint_end - function that adds a
 * new node at the end of a listint_t list
 * @head: pointer to first node
 * @n: element of node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;
	h->next = new;
	h = new;
	return (new);
}
