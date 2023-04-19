#include "3-calc.h"

/**
 * op_add - adds a and b
 *
 * @a: first value
 * @b: second value
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of a and b
 *
 * @a: first value
 * @b: second value
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of a and b.
 *
 * @a: first value
 * @b: second value
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the result of the division of a by b.
 *
 * @a: first value
 * @b: second value
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of a by b.
 *
 * @a: first value
 * @b: second value
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}

