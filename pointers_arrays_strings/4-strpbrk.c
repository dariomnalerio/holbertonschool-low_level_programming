#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be used
 * @accept: String of bytes to check
 * Return: Pointer to byte found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}

	return (NULL);
}
