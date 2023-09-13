#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - select the option to carry op
 * @s: the argument
 *
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	/* iniyialize i */
	i = 0;

	/* s does not match any of the argument */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f); /*return operation */
}
