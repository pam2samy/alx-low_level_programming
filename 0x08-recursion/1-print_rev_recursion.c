#include "main.h"
/**
 * _print_rev_recursion - Prints in reverse
 * @s: the string input
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
