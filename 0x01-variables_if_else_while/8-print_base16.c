#include <stdio.h>
/**
 * main - Entry point
 * program that prints the base 16 alphabet in lowercase
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}