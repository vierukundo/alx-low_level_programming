#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: array of strings
 * Return: nothing
 */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	int (*func)(int num1, int num2);

	char *operator = argv[2];

	int num1, num2, calc;

	func = get_op_func(operator);
	if (argc != 4 || func == NULL)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
