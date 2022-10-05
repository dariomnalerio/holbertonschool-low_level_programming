#include "main.h"

/**
 *
 *
 *
*/

void print_square(int size)
{
	int s, ver;

	if (size > 0)
	{	
		for (ver = 0 ; ver < size ; ver++)
		{
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
