#include "main.h"

/**
 * _puts - Prints a string, followed by
 * a new line, to stdout
 * @str:  String to be printed
 *
*/

void _puts(char *str)
{
	char letter = *str;

	while (*str != '\0')
	{
		_putchar(letter);
		str++;
		letter = *str;
	}
	_putchar('\n');
}
