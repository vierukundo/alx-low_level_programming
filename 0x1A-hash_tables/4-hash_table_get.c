#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item, *head;

	index = key_index((unsigned const char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	item = (ht->array)[index];
	if (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
		else
		{
			head = item;
			while (head)
			{
				if (strcmp(head->key, key) == 0)
					return (head->value);
				head = head->next;
			}
		}
	}
	return (NULL);
}
