#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value
 * @s: Starting memory
 * @b: the value desired
 * @n: number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
