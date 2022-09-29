#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10,
 * followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar((n % 10) + '0');
		n++;
	}

		putchar('\n');
		return (0);
}
