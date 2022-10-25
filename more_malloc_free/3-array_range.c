#include "main.h"

/**
 * array_range - Creates array containing all values
 * inbetween two numbers
 * @min: Lower number
 * @max: Higher number
 * Return: Pointer to newly created array if success
 * NULL otherwise
 */

int *array_range(int min, int max)
{
	int i, j = 0;
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

	for (i = min; i <= length; i++)
	{
		array[j] = i;
		j++;
	}

	return (array);
}
