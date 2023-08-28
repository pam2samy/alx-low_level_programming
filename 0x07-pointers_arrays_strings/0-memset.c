#include "main.h"

/**
 * _memset - Fills a memory with a constant value
 * @s: Starting value
 * @b: Desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
