#include "function_pointers.h"

/**
 * array_iterator - Executes function given as parameter
 * on each element of an array
 *
 *@array: Array to execute function on
 *@size: Size of the array
 *@action: Function to be executed on array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
