#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initializez it
 * with a specific char
 *
 * @size: Size of the array
 * @c: Char to be initialized
 *
 * Return: If size == 0 or function fails: NULL
 * Otherwise: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		array[i] = c;

	return (array);

}
