#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory
 * @ptr: Previous pointer to the old memory
 * @old_size: old size allocated memory
 * @new_size: new size allocated 
 * Return: Pointer to the new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = old_ptr[i];
	}
	
	free(ptr);
	return (p);
}
