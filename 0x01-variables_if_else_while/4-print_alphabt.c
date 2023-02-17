#include <stdio.h>
/**
 * main - Entry point
 * program that prints the alphabet in except q and e
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
