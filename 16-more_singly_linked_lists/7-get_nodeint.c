#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gives the value of a index node
 * Return: value of the node on success, NULL if it fails
 * @head: Head of the list
 * @index: Index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head; head = head->next, i++)
	{
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
