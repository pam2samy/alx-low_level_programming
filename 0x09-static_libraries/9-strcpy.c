#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy
 * @src: where from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int q = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for (; q < p ; q++)
	{
		dest[q] = src[q];
	}
	dest[p] = '\0';
	return (dest);
}

