#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural sqrt of n
 * @n: number to compute it's root
 *
 * Return: The resulting sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number  to calculate sqrt of
 * @i: iterator
 *
 * Return: the resulting square root of
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
