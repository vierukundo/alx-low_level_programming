#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer to first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h = head;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
