#include "main.h"
#include <stdlib.h>

/**
 * str_concat - gets inputs together
 * @s1: input1
 * @s2: input2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *j;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	j = malloc(sizeof(char) * (i + ci + 1));

	if (j == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		j[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		j[i] = s2[ci];
		i++, ci++;
	}
	j[i] = '\0';
	return (j);
}
