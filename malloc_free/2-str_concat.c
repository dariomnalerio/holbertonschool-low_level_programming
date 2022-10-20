#include "main.h"

/**
 * str_concat - Concatenates two string
 *
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: If concatenation fails: NULL
 * Otherwise: a pointer to the space in memory
 * containing the concatenated strings
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, h;
	char *array;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
	}

	for (j = 0 ; s2[j] != '\0' ; j++)
	{
	}

	array = malloc(sizeof(char) * (i + j + 1));

	if (array == NULL)
		return (NULL);

	for (h = 0 ; h < i ; h++)
		array[h] = s1[h];

	for (h = 0; h < i + j + 1; h++)
	{
		array[i + h] = s2[h];
	}

	return (array);
}
