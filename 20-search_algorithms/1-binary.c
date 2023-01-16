#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Array
 * @size: size of the array
 * @value: value to be found
 * Return: value index, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	print(array, 0, size - 1);
	return (recursive(array, 0, size - 1, value));
}

/**
 * recursive - binary search recursive function
 * @array: Array
 * @low: array's lowest value to search through
 * @high: array's highest value search through
 * @value: value to be found
 * Return: value index, -1 otherwise
*/

int recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
	{
		if (high - low > 1)
			print(array, mid + 1, high);
		return (recursive(array, mid + 1, high, value));
	}
	else
	{
		if (high - low > 1)
			print(array, low, mid - 1);
		return (recursive(array, low, mid - 1, value));
	}
}


/**
 * print - Prints array
 * @array: array
 * @low: array's lowest value
 * @high: array's highest value
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
