#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int hdec = 017;
	int hex = 0xDEF;

	_printf("Hello %c and %d as integer and %d as hex int.\n", 90, hdec, hex);
	printf("This is hex %d\n", hex);
	_printf("%d is normal int\n", 45567890);
	char *s = convert_to_binary(100);
	printf("%s\n", s);
	return (0);
}
