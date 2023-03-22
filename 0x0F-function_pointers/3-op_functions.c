#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - a function that adds two integers
 * @a: first operand
 * @b: second operand
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that subtract two integers
 * @a: first operand
 * @b: second operand
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that multiply two integers
 * @a: first operand
 * @b: second operand
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that divide two integers
 * @a: first operand
 * @b: second operand
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a function that find modulus of two integers
 * @a: first operand
 * @b: second operand
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
