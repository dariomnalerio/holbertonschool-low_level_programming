#include "main.h"

/**
 * times_table - Prints the 9 time table
 * starting with 0
*/

void times_table(void)
{
	int n, m;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar('0');
		_putchar(44);
		for (m = 1 ; m <= 9 ; m++)
		{
			int prod = m * n;

			_putchar(32);

			if (prod <= 9)
				_putchar(32);
			else
				_putchar(prod / 10 + '0');

			_putchar(prod % 10 + '0');
			if (m < 9)
				_putchar(44);
		}
	_putchar('\n');
	}
}
