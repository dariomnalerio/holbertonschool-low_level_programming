#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always 0
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}

	return (0);
}
