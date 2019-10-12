#include "hash_tables.h"
/**
 * hash_table_get - function retrieves a value associated with a key
 *
 * @ht: ptr to hash table
 * @key: key to key in hash table
 *
 * Return: value of element, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
