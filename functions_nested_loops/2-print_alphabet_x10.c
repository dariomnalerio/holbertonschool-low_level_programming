#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times,
 * in lowercase, followed by a new line
*/

void print_alphabet_x10(void)
{
	int repeat = '0';
	char letter;

		while (repeat <= 9)
		{
			for (letter = 'a'; letter <= 'z' ; letter++)
				_putchar(letter);

			_putchar('\n');
		}
}
