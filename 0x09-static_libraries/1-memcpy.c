#include "main.h"
/**
 * _memcpy - copies memory ares
 * @dest: memory where it's stored
 * @src: memory where copied
 * @n: number of bytes
 *
 * Return: copied memory with chaged byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
