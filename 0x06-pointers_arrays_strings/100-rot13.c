#include "main.h"

/**
 * rot13 - encoder of rot13
 * @s: poiters to the string parameters
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabdcefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters1[j])
			{
				s[i] = letters2[j];
				break;
			}
		}
	}
	return (s);
}
