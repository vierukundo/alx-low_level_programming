#include "main.h"
/**
 * sqrt_recursion - searcch for the roots
 * @n: number
 * @root: its roots
 * Return: root
 */
int sqrt_recursion(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (sqrt_recursion(n, root + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int result;

	if (n < 0)
		return (-1);
	result = sqrt_recursion(n, 0);
	return (result);

}
