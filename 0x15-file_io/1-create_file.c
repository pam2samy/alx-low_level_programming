#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content of the written file.
 *
 * Return: 1 if success. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int n;
	int letters;
	int rwr;

	if (!filename)
	return (-1);

	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (n == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (letters = 0; text_content[letters]; letters++);

	rwr = write(n, text_content, letters);

	if (rwr == -1)
	return (-1);

	close(n);

	return (1);
}
