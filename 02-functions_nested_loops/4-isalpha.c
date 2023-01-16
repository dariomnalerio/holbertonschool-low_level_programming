#include "main.h"

/**
 * _isalpha - Checks whether c is a letter
 * @c: Character to be checked
 *
 * Return: 1 (success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
