#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s:  String to be printed
 *
*/

void rev_string(char *s)
{
	int length = 0;
	int n;

	while (s[length] != '\0')
		length++;

	for (n = length - 1 ; n >= 0 ; n--)
		_putchar(s[n]);
}
