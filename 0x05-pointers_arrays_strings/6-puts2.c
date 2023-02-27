#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, l;

	l = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		l++;
	}
	for (i = 0; i <= l - 1; i++)
	{
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
