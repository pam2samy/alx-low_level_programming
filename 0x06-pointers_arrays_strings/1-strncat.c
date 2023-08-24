#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: String destination
 * @src: Source string
 * @n: number of bytes to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
