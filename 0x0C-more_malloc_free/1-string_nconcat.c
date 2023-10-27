#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings
 *
 * @s1: str1
 * @s2: str2
 * @n: number of elements to concatenate
 *
 * Return: pointer to the new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, l;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	for (l = 0; l < j; l++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *s;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
