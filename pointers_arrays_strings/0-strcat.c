#include "main.h"

/**
 * _strcat - Appends one string to another
 * @dest: One of the string to be appended
 * @src: The other string to be appended
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int n;

	while (dest[dlen] != '\0')
		dlen++;

	for (n = 0 ; src[n] != '\0' ; n++)
		dest[dlen + n] = src[n];

	return (dest);
}
