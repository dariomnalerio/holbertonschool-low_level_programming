#include <stdio.h>

/**
 * main - Prints the alphabet in lower case,
 * then uppercase, then adds a new line
 *
 * Return: always 0
*/

int main(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);

		for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);

				putchar('\n');

				return (0);
}
