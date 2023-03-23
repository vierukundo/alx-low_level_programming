#include "variadic_functions.h"
/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum = 0;

	unsigned int i;

	if (n <= 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
