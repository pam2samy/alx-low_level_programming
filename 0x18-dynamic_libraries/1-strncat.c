#include "main.h"
/**
 * _strncat - concatenates two strings
 * using utmost n bytes from src
 * @dest: entered value
 * @src: value2
 * @n: value3
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	dest[p] = '\0';
	return (dest);
}
