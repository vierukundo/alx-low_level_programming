#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to first node
 * Return: element of head node
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	listint_t *h = *head;

	if (*head == NULL)
		return (0);
	if (*head)
	{
		h = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = h;
	}
	return (data);
}
