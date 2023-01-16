#include "lists.h"

/**
 * list_len - Counts number of elements in a linked list
 * @h: First element of the list
 * Return: Number of elements in linked list
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
