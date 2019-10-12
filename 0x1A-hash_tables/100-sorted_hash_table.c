#include "hash_tables.h"
/**
 * shash_table_create - function creates a hash table
 *
 * @size: unsigned int size of array
 *
 * Return: ptr to new hash table, or NULL on error
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x = 0;

	/* allocate memory for hash table, check if NULL */
	shash_table_t *new_table = malloc(sizeof(shash_table_t));

	if (new_table == NULL)
		return (NULL);
	if (size < 1)
		return (NULL);
	/* allocate memory for  entries in hash table */
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	/* set entries to NULL to be able to search properly */
	while (x < size)
	{
		new_table->array[x] = NULL;
		x++;
	}
	return (new_table);
}

/**
 * shash_table_set - function adds element to hash table
 *
 * @ht: ptr to hash table
 * @key: const char ptr to key (cannot be empty)
 * @value: const char ptr to vallue associated with key
 *
 * Return: 1 on success, otherwise 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *newnode;

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
			return (1);
		}
		newnode = newnode->next;
	}
	return (0);
}
/**
 * shash_table_print - function prints a hash table
 *
 * @ht: ptr to hash table
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned int x;
	int flick = 0;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		shash_node_t *node = ht->array[x];

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

/**
 * shash_table_delete - function deletes a hash table
 *
 * @ht: ptr to hash table
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned int x = 0;
	shash_node_t *node = NULL;
	shash_node_t *temp = NULL;

	for (; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_print_rev - function prints a hash table
 *
 * @ht: ptr to hash table
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned int x;
	int flick = 0;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		shash_node_t *node = ht->array[x];

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
