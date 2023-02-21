#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer to be computed
 * Return: n if n is greater than 0. n * -1 otherwise.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
