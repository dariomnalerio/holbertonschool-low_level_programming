#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to be used in function
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
