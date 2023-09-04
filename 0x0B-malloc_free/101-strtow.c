#include <stdlib.h>
#include "main.h"

/**
 * count_word - helps function to count number of words
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string
 * @str: the string
 *
 * Return: pointer to an array of strings
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **a, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	a = (char **) malloc(sizeof(char *) * (words + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				a[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	a[k] = NULL;

	return (a);
}
