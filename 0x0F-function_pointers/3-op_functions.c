#include "3-calc.h"

/**
 * op_add - sum of two integers sent
 * @a: first integer
 * @b: second integer sent
 *
 * Return: sum of a int and b int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: first integers
 * @b: second integers
 *
 * Return: difference of integers a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers
 * @a: first integers
 * @b: second integers
 *
 * Return: product of integers a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: first integers
 * @b: second integers
 *
 * Return: result of division of integers a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the divisions of two integers
 * @a: first int integers
 * @b: second int integers
 *
 * Return: reminder of integers a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
