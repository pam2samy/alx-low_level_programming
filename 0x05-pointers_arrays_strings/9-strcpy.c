#include "main.h"

/**
 *_strcpy - prints a copy of the string
 * @dest: Destination
 * @src: Source
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}

	*(dest + j) = '\0';
	return (dest);
}
