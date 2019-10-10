#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 *
 * @size: unsigned int size of array
 *
 * Return: ptr to new hash table, or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	/* allocate memory fo # table */
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	/* allocate memory for  entries in # table */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	/* set entries to NULL to be able to search properly */
	while (x < size)
	{
		new_table->array[x] = NULL;
		x++;
	}

	return (new_table);
}
