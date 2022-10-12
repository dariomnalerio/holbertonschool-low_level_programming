#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be used in function
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	char check[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] =  (str[0] - 32);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 12 ; j++)
		{
			if (str[i] == check[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = (str[i + 1] - 32);
		}
	}
	return (str);
}
