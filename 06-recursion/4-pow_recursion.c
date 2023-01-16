#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Value to be raised
 * @y: The power
 * Return: Result
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		x *= _pow_recursion(x, y - 1);

	return (x);
}
