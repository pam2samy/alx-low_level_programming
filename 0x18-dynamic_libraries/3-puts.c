#include "main.h"
/**
 * _puts - prints strings to stdout
 * @str: to be printed
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
