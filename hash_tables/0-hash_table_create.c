#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array of the nodes
 *
 * Return: Pointer to the created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	node = malloc(size * sizeof(node));
	if (!node)
	{
		free(table);
		return (NULL);
	}
	table->array = node;
	return (table);
}
