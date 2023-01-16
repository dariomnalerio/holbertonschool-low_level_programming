#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: String given as a parameter
 *
 * Return: If str == NULL or insufficent memory is available: NULL
 * Otherwise: a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int i, j;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}

	array = malloc(sizeof(char) * i + 1);

	if (array == NULL)
		return (NULL);

	for (j = 0 ; j <= i ; j++)
		array[j] = str[j];

	return (array);
}
