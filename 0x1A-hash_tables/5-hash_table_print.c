#include "hash_tables.h"
/**
 * hash_table_print - function prints a hash table
 *
 * @ht: ptr to hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int x;
	int flick = 0;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		hash_node_t *node = ht->array[x];

		if (node == NULL)
		{
			continue;
		}
		if (flick == 1)
		{
			printf(", ");
			printf("'%s': '%s'", node->key, node->value);
		}
		if (flick != 1)
			printf("'%s': '%s'", node->key, node->value);
		flick = 1;
	}
	printf("}");
	printf("\n");
}
