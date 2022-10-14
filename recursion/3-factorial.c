#include "main.h"

/**
 * factorial - Returns factorial of a given number
 * @n: Given number
 * Return: Factorial or -1 if n<0
*/

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
