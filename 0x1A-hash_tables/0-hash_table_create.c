#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (i = 0; i < size; i++)
		(ht->array)[i] = NULL;
	return (ht);
}
