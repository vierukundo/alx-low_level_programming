#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings
 * @separator: string separator
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (separator == NULL || i == n - 1)
		{
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);
		}
		else
		{
			if (s == NULL)
				printf("%s%s", "(nil)", separator);
			else
				printf("%s%s", s, separator);
		}
	}
	printf("\n");
	va_end(ap);
}
