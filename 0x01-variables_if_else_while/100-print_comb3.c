#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int s = 0, e = 8, s1 = 1, e2 = 9;

	while (s <= e)
	{
		s1 = s + 1;

		while (s1 <= e2)
		{
			putchar(s + '0');
			putchar(s1 + '0');
			s1++;

			if (s != e)
			{
				putchar(',');
				putchar(' ');
			}
		}
		s++;
	}
	putchar('\n');
	return (0);
}

