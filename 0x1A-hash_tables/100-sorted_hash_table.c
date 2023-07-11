#include "hash_tables.h"
/**
 * shash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL on error
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	for (i = 0; i < size; i++)
		(ht->array)[i] = NULL;
	return (ht);
}
#include "hash_tables.h"
/**
 * create_hash_node - creates hash item
 * @key: key
 * @value: value of key
 * Return: pointer to created node
 */
shash_node_t *create_hash_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
	return (node);
}
/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	if (ht->shead == NULL)
	{
		ht->shead = ht->stail = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext)
			temp = temp->snext;
		new_node->sprev = temp;
		temp->snext = new_node;
	}
	ht->array[index] = ht->stail = new_node;
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *head;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	head = (ht->array)[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
/**
 * shash_table_print - function that prints a hash table
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node, *shead;
	unsigned long int flag = 0;

	if (ht == NULL)
		return;
	shead = ht->stail;
	printf("{");
	while (shead)
	{
		node = shead;
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
		shead = shead->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints a hash table
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node, *shead;
	unsigned long int flag = 0;

	if (ht == NULL)
		return;
	shead = ht->stail;
	printf("{");
	while (shead)
	{
		node = shead;
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
		shead = shead->sprev;
	}
	printf("}\n");
}
