#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File name
 * @text_content: File content
 *
 * Return: On success: 1
 * If it fails: -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w, strlen;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (strlen = 0; text_content[strlen] != '\0'; strlen++)
	{
	}

	w = write(fd, text_content, strlen);
	if (w == -1)
		return (-1);

	return (1);

}
