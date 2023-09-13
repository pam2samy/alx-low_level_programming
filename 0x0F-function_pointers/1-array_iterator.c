#include "function_pointers.h"
/**
 * array_iterator - An iterator
 * @array: the array
 * @size: the size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(*array);
		array++;
	}
}
