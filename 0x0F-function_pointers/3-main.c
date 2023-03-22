#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: array of strings
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int (*func)(int num1, int num2);

	char *operator;

	int num1, num2, calc;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	operator = argv[2];
	func = get_op_func(operator);
	if (func == NULL || operator[1] != '\0')
	{
		printf("%s\n", "Error");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
