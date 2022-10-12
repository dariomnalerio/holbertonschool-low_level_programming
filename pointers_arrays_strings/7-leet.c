#include "main.h"

/**
 * leet - Encondes string into 1337
 * @str: String to be encoded
 * Return: Encoded string
*/

char *leet(char *str)
{
	int i, j;
	char let[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char num[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
