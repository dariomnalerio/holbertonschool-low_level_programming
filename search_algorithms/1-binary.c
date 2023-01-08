#include "search_algos.h"

/**
 *
 *
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	print(array, 0, size - 1);
	return (recursive(array, 0, size - 1, value));
}

/**
 *
 *
 *
*/

int recursive (int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low >= high)
		return (-1);
	else
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
		{
			print(array, mid + 1, high);
				return (recursive(array, mid + 1, high, value));
		}
		else
		{
			print(array, low, mid - 1);
			return (recursive(array, low, mid - 1, value));
		}

	}
}

/**
 *
 *
 *
*/

void print (int *array, size_t low, size_t high)
{
	size_t i;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i <= high - 1)
			printf(", ");
	}
	printf("\n");
}
