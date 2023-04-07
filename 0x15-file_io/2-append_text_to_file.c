#include "main.h"
/**
 * _strlen - Calculate the lenghts of a string.
 * @str: The string whose length is to be calculated.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int char_count = 0;

	while (*str++)
		char_count++;

	return (char_count);
}
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file to which text is to be appended.
 * @text_content: The text to be appended.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_WRONLY | O_APPEND);
	if (fd_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, _strlen(text_content));
		if (fd_write == -1)
		{
			close(fd_open);
			return (-1);
		}
	}

	close(fd_open);
	return (1);
}
