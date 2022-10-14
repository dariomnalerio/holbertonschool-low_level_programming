#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: String to be printed
*/

void _puts_recursion(char *s)
{
	int i = 1;

	if ((*s) == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s + 0);
		_puts_recursion(s + i);
	}
}
