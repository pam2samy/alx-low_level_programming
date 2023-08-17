#include "main.h"

/**
 * print_numbers - Function that print all numbers from
 * 0 to 9
 *
 * Return: Nothing!
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
