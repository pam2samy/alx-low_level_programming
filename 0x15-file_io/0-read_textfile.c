#include "main.h"

/**
 * read_textfile - reads a textfile and prints the letters
 * @filename: the filename.
 * @letters: letters printed.
 *
 * Return: Letters Printed. 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t nrd, nwr;
	char *bf;

	if (!filename)
	return (0);

	n = open(filename, O_RDONLY);

	if (n == -1)
	return (0);

	bf = malloc(sizeof(char) * (letters));
	if (!bf)
	return (0);

	nrd = read(n, bf, letters);
	nwr = write(STDOUT_FILENO, bf, nrd);

	close(n);

	free(bf);

	return (nwr);
}
