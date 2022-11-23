#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * @letters: Number of letters to be read and printed
 * @filename: Name of the file
 *
 * Return: On success: actual number of letters read and printed
 * If it fails: -1 if buffer is NULL, 0 otherwise
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);

	free(buffer);
	close(fd);
	return (w);
}
