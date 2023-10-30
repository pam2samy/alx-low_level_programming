#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: filename.
 * @text_content: content.
 *
 * Return: 1 if the file exists. -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n;
	int letters;
	int rwr;

	if (!filename)
	return (-1);

	n = open(filename, O_WRONLY | O_APPEND);

	if (n == -1)
	return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++);

		rwr = write(n, text_content, letters);

		if (rwr == -1)
		return (-1);
	}

	close(n);

	return (1);
}
