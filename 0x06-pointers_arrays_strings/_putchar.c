#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error, -1 is returned, and err-no is set
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
