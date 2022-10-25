#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Size of elements in bytes
 * Return: Pointer to newly allocated memory on success
 * Otherwise NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;

	return (str);
}
