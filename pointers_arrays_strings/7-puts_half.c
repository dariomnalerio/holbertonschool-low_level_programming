#include "main.h"

/**
 * puts_half - Pritns half of a string,
 * followed by a new line
 * @str: Poitns to string to be printed
*/

void puts_half(char *str)
{
	int n, len = 0;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (; n < len && n < 444 ; n++)
		_putchar(str[n]);

	_putchar('\n');
}
