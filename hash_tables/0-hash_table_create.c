#include "hash_tables.h"

/**
 * hash_table_t - Creates a hash table
 * @size: Size of the array of the nodes
 *
 * Return: Pointer to the created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (table == NULL || node == NULL)
		return (NULL);
	table->size = size;
	table->array = &node;

	return (table);
}
