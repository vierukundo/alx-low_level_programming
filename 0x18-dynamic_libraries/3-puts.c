#include "main.h"
/**
 * _puts - function that prints a string, followed
 * by a new line, to stdout
 * @s: string
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
	printf("\n");
}
