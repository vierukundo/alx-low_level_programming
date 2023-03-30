#include "lists.h"
#include <unistd.h>
/**
 * before_main - prints something before
 * main is executed
 * Return: nothing
 */
void before_main(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	write(1, s, strlen(s));
}
