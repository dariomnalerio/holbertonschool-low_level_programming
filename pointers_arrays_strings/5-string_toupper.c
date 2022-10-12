#include "main.h"

/**
 * string_toupper - Changes all lowercase letter
 * of a string to uppercase
 * @str: String to be changed
 * Return: Uppercase string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 32);
	}
	return (str);
}
