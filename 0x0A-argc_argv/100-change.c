#include "main.h"

/**
 * main - prints the minimum number
 * @argc: Argument
 * @argv: Array
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num, i, j;
	int p[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	j = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= p[i])
		{
			j++;
			num -= p[i];
		}
	}
	printf("%d\n", j);
	return (0);
}
