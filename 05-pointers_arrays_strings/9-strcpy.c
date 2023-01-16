#include "main.h"

/**
 * _strcpy - Function that copies a string, including
 * the null byte to a buffer
 * @dest: Variable that points to buffer
 * @src: Points to string to be buffered
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0 ; src[len] != '\0' ; len++)
		dest[len] = src[len];

	dest[len] = '\0';
	return (dest);
}
