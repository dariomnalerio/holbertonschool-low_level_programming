#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Length of array
 * Return: ptr
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
