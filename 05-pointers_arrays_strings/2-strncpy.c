#include "main.h"

/**
 * _strncpy - Appends n bytes of one string to another
 * @dest: One of the string to be appended
 * @src: The other string to be appended
 * @n: Number of bytes from string to be appended
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

	while (dest[dlen] != '\0')
		dlen++;

	for (i = 0 ; src[i] != '\0' && (i < n) ; i++)
		dest[i] = src[i];

	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
