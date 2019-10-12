#include "hash_tables.h"
/**
 * hash_table_set - function adds element to hash table
 *
 * @ht: ptr to hash table
 * @key: const char ptr to key (cannot be empty)
 * @value: const char ptr to vallue associated with key
 *
 * Return: 1 on success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;

	if (strlen(key) < 1)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newnode = ht->array[index];

	if (newnode == NULL)
	{
		newnode = malloc(sizeof(hash_node_t));
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		newnode->next = NULL;
		ht->array[index] = newnode;
		return (1);
	}

	while (newnode != NULL)
	{
		if (strcmp(newnode->key, key) == 0)
		{
			free(newnode->value);
			newnode->value = strdup(value);
		}
		newnode = newnode->next;
	}
	return (1);
}
