#include "lists.h"
/**
 * add_node_end - a function that adds
 * a new node at the end of a list_t list
 * @head: double pointer to first node
 * @str: string element
 * Return: address of new node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	list_t *h = *head;

	unsigned int len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	return (h->next);
}
