#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory area to be changed
 * @src: Memory area to be copied
 * @n: Number of bytes to be copied
 * Return: changed string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
