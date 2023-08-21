#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The parameter to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int c = 1
	unsigned int num = 0;

	do {
		if (*s == '-')
			c *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '9');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * c);
}
