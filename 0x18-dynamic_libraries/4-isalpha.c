#include "main.h"
/**
 * _isalpha - Prints alphabetic characters
 * @c: input
 * Return: 1 if c is a letter and return 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
