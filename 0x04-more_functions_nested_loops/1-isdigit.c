#include "main.h"
/**
 * _isdigit - function that checks for uppercase character
 * @c: The character to print
 * Return: 1 if digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
