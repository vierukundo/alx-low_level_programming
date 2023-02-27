#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string
 * Return: 0 (Success)
 */
void puts_half(char *str)
{
	int i, l;

	l = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		l++;
	}
	if (l % 2 != 0)
	{
		for (i = ((l - 2) / 2) + 2; i <= l - 1; i++)
		{
			printf("%c", *(str + i));
		}
	}
	else
	{
		for (i = ((l - 1) / 2) + 1; i <= l - 1; i++)
		{
			printf("%c", *(str + i));
		}
	}
	printf("\n");
}
