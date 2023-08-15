#include "main.h"

/**
 * _isalpha - Checks for alphabetic chareacter
 * @c: The character to be ckecked
 * Return: 1 for lowercase and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
