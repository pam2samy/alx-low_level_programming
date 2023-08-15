#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int x, y, z, s, t;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				s = z % 10;
				t = (z - s) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(t + '0');
				_putchar(s + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
