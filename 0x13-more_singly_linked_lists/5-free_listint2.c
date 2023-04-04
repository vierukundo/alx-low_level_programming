#include "lists.h"
/**
 * free_listint2 - frre list and set head to NULL
 * @head: pointer to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head;

	if (*head == NULL)
		return;
	while (*head)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}
