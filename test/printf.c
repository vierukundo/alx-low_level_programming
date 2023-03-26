#include "main.h"
/**
 * print_string - print string
 * @str: input string
 * Return: number of character printed
 */
int print_string(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	write(1, str, len);
	return (len);
}
