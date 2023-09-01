#include "main.h"
/**
 * _isupper - check if letters are uppercase
 * @c: char to look
 *
 * Return: if uppercase return 1, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}

