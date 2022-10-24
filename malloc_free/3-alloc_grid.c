#include "main.h"

/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of array
 * @height: Height of array
 *
 * Return: Pointer on success.
 * Otherwise NULL
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = malloc(sizeof(int *) * width);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);

		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		else
		{
			for (j = 0; array[i][j]; j++)
			{
				array[i][j] = 0;
			}
		}
	}

	return (array);
}
