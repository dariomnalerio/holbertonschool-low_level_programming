#include <stdio.h>

/**
 * main - Prints alphabet in lower case,
 * except letters q and e, followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	char letter = 'a';

		while (letter <= 'z')
		{
			if (letter != 'q' && letter != 'e')
			{
				putchar(letter);
				letter++;
			}
			else
				letter++;
		}
				putchar('\n');
				return (0);
}
