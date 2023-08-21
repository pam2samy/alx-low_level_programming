#include "main.h"

/**
 * print_array - prints n mumber of an array
 * @a: Array
 * @n: number to be printed
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("#d", a[t]);
		if (t != n - 1)
			printf(",");
	}
	printf("\n");
}
