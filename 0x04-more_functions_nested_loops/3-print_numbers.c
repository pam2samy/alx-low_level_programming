#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Function that print all numbers from
 * 0 to 9
 *
 * Return: Nothing!
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
