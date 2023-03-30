#include "lists.h"
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 * @head: double pointer to first node
 * @str: element of a node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	unsigned int len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
