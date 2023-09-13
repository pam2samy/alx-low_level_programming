#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums 2 numbers
 * @a: 1st
 * @b: 2nd
 *
 * Return: their sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 * @a: 1st
 * @b: 2nd
 *
 * return: their difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: 1st
 * @b: 2nd
 *
 * return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st
 * @b: 2nd
 *
 * return: result of their division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder after division
 * @a: 1st
 * @b: 2nd
 *
 * return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
