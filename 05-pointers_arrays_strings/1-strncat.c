#include "main.h"

/**
 * _strncat - Appends n bytes of one string to another
 * @dest: One of the string to be appended
 * @src: The other string to be appended
 * @n: Number of bytes from string to be appended
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

	while (dest[dlen] != '\0')
		dlen++;

	for (i = 0 ; src[i] != '\0' && (i < n) ; i++)
		dest[dlen + i] = src[i];

	return (dest);
}
