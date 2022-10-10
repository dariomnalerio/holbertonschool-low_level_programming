#include "main.h"

/**
 * print_array - Prints elements of an array of integers,
 * followed by a new line
 * @a: Array of integers to be printed
 * @n: Number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n ; b++)
	{
		printf("%d", a[b]);

		if (b != n - 1)
			printf(", ");
	}

	printf("\n");
}
