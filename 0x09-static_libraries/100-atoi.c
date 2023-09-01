#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: the string to use
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, j = 0;
	unsigned int unsig = 0;

	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			sig *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		unsig = (unsig * 10) + (s[j] - '0');
		j++;
	}
	unsig *= sig;
	return (unsig);
}
