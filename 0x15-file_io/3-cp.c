#include "main.h"
/**
 * main - entry point
 * @ac: number of arguments passed to the program
 * @av: an array of pointers to the arguments
 * Return: 0 on success, otherwise an error code
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w, c;
	char *buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		r = read(fd_from, buf, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		w = write(fd_to, buf, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (r == 1024);

	c = close(fd_from);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	c = close(fd_to);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

