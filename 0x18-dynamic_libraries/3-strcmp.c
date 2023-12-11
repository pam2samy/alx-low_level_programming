#include "main.h"
/**
 * _strcmp - compares string values
 * @s1: input
 * @s2: input
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			return (s2[p] - s2[p]);
		}
		p++;
	}
	return (0);
}
