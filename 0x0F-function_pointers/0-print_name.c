#include "function_pointers.h"

/**
 * print_name - function that print a name
 *
 * @f: variable name
 * @name: the name to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
