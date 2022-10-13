#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Points to  string to be changed
 * @b: Byte to be copied
 * @n: Number of bytes of string to be filled
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
