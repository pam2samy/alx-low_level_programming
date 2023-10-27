#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes
 * @a: adrees of the function
 * @n: number of bytes
 * Return: void
 */
int print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own
 * @argc: argument count
 * @argv: vector
 *
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
