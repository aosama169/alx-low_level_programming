#include "3-calc.h"

/**
 * get_op_func - function pointer selects the correct function
 * @s: the operator given
 *
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opts[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (opts[i].op)
	{
		if (strcmp(opts[i].op, s) == 0)
			return (opts[i].f);
		i++;
	}

	return (NULL);
}
