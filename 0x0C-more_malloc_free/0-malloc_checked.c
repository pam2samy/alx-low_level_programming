#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);
	if (pr == NULL)
	{
		exit(98);
	}
	return (pr);
}
