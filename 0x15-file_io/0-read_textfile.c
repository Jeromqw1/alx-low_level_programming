#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer to the name of the file to read
* @letters: number of letters it should read and print
* Return: the actual number of letters read and printed, 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(*buffer));
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, nread) != nread)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (nread);
}
