#include "main.h"

/**
 * _strlen_recursion - Counts string length
 * @s: String which length will be counted
 * Return: length or null
*/

int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	else
		return (0);
}
