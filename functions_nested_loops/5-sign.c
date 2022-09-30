#include "main.h"

/**
 * print_sign - Prints and number and
 * wheter its positive (+), negative (-)
 * or zero (0).
 * @n: Number to be printed
 *
 * Return: 1 (+), -1 (-) or 0 (0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
			_putchar('+');
	}

	else if (n == 0)
	{
		return (0);
			_putchar(0);
	}

	else
	{
		return ("-1");
			_putchar("-");
	}
}
