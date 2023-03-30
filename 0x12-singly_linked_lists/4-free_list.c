#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: pointer to first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}
