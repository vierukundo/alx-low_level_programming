#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: number
 * Return: factorial of number
 */
int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	result = n * factorial(n - 1);
	return (result);
}
