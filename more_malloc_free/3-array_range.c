#include "main.h"

/**
 *
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int i;
	int length;
	int *array;

	if (min > max)
		return (NULL);

	for (length = 0; length <= max; length++)
	{
	}

	array = malloc(sizeof(int) * length);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		array[min + i] = min + i;

	return (array);
}
