#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to name of the file
 * @text_content: String to add at the end of the file
 *
 * Return: 1 on success, -1 if it fails
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);

}

/**
 * _strlen - Counts the lenght of a string
 * @s: String which lenghth is to be counted
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}
