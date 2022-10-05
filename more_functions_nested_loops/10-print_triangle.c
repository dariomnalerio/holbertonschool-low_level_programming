#include "main.h"

/**
 * print_triangle - Prints a triangle
 * followed by a new line
 * @size: Size of the triangle
*/

void print_triangle(int size)
{
	int s, ver;

	if (size > 0)
	{
		for (ver = 0 ; ver < size ; ver++)
		{
			for (s = 1 ; s <= (size - ver) ; s++)
			{
				_putchar(' ');
			}

			for (s = 0 ; s < ver ; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
