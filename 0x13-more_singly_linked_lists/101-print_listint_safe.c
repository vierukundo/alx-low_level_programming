#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("%d\n", head->n);
		n++;
		head = head->next;
	}
	return (n);
}
