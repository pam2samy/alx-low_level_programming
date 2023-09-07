#include "main.h"
#include <stdlib.h>

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
