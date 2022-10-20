#include "main.h"

/**
 *
 *
 *
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

	array = malloc(sizeof(char) * i);

	for (j = 0 ; j <= i ; j++)
		array[j] = str[j];

	return (array);
}
