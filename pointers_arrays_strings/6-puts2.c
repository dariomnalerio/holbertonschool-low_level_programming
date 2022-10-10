#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: String to be printed
*/

void puts2(char *str)
{
	int n, len = 0;

	while (str[len++])
		len++;
	len--;

	for (n = 0 ; n < len && n <= 224 ; n += 2)
		_putchar(str[n]);

	_putchar('\n');
}
