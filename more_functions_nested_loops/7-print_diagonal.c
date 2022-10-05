#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Lenght of line
 *
*/

void print_diagonal(int n)
{
	int l, space;

	if (n > 0)
	{
		for (l = 0 ; l < n ; l++)
		{
			for (space = 0 ; space < l ; space++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
