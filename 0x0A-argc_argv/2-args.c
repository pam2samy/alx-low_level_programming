#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: Arguments
 * @argv: arrays
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}

