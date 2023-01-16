#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by
 * a new line
 * @s:  String to be printed
 *
*/

void print_rev(char *s)
{
	int length = 0;
	int n;

	while (s[length] != '\0')
		length++;

	for (n = length - 1 ; n >= 0 ; n--)
		_putchar(s[n]);

	_putchar('\n');
}
