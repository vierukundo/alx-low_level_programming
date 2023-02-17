#include <stdio.h>
/**
 * main - Entry point
 * print digits of base 10 that are single
 *Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		printf("%d\n", digit);
		digit++;
	}
	return (0);
}
