#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s:  String to be reversed
 *
*/

void rev_string(char *s)
{
	int count = 0;
	int i;
	char aux;

	while (s[count] != '\0')
		count++;

	for (i = 0 ; i < (count / 2) ; i++)
	{
		aux = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = aux;
	}
}
