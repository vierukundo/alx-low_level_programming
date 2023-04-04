#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: double pointer to first node
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = NULL, *p = NULL;

	while (*head)
	{
		h = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = h;
	}
	*head = p;
	return (*head);
}
