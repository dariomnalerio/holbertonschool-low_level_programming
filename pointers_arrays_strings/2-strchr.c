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
	char *p;

	for (i = 0 ; s[i] != c || s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}

		else if (s[i] == '\0')
			return (&s[i]);
	}
	return (s);
}
