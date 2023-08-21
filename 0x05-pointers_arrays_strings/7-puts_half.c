#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 * Retuen: void
 */

void puts_half(char *str)
{
	int j = 0;

	while (*str != '\0')
	{
		j++;
		str++;
	}

	str -= (j / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
