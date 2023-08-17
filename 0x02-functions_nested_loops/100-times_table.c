#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: The parameter
 */

void print_times_table(int n)
{
	int p, q, r;

	if (n <= 15 && n >= 0)
		for (p = 0; p <= n; p++)
		{
			_putchar('0');
			for (q = 1; q <= n; q++)
			{
				_putchar(',');
				_putchar(' ');
				r = p * q;
				if (r <= 99)
					_putchar(' ');
				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
}
