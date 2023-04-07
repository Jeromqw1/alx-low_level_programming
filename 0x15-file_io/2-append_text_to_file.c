#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or if
 * you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (text_content == NULL)
		return (1);
	FILE *file;
	size_t len;
	size_t n;
	

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	len = strlen(text_content);
	n = fwrite(text_content, sizeof(char), len, file);
	fclose(file);

	if (n != len)
	return (-1);

	return (1);
}
