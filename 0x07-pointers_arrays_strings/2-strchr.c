#include "main.h"

/**
 * _strchr - Point of Entry
 * @s: input
 * @c: input
 * Return: 0 on Success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
