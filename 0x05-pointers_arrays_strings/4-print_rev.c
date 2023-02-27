#include "main.h"
/**
 * print_rev - function that returns the length of a string.
 * @s: string
 * Return: reverse of string (Success)
 */
void print_rev(char *s)
{
	int i = 0;

	int c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
