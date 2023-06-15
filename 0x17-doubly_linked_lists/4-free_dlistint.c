#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head pointer to list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	if (head == NULL)
		return;
	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
