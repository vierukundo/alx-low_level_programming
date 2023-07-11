#include "hash_tables.h"
/**
 * free_list - frees linked list
 * @head: pointer to list
 * Return: nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *current_node = head, *next_node;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node->key);
		free(current_node->value);
		free(current_node);
		current_node = next_node;
	}
}
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash tabel
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
