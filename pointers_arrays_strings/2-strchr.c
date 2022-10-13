#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @c: character to locate
 * @s: String to be used
 * Return: Location of character or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
