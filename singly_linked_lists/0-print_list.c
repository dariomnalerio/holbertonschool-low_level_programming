#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: First node of the list
 * Return: Number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);

		else
		{
		printf("[%d]", h->len);
		printf("%s\n", h->str);
		}

		i++;
		h = h->next;
	}

	return (i);
}
