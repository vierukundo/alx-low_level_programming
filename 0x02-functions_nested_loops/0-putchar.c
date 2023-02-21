#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char c[9] = "_putchar\n";

	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
