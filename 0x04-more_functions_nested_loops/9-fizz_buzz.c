#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	char F[5] = "Fizz";

	char B[5] = "Buzz";

	char FB[9] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s ", F);
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			if (i == 100)
			{
				printf("%s\n", B);
			}
			else
			{
				printf("%s ", B);
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", FB);
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
