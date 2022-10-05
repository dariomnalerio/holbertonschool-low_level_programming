#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Lenght of line
 *
*/

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
