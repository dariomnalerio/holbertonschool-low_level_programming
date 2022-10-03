#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints natural numbers from n
 * to 98, followed by a new line
 *
 *@n: Starting number
 *
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}

	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}

	if (n == 98)
		printf("%d", n);
}
