#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: pointer to first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
	{
		head = head->next;
		free_list(head);
	}
	free(head);
}
