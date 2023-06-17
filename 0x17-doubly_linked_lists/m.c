#include <stdio.h>
#include <stdlib.h>
int pal(int n)
{
	int *pal_num, j, i, m = n, len = 0;

	while (m)
	{
		len++;
		m = m / 10;
	}
	pal_num = malloc(sizeof(int) * len);
	if (pal_num == NULL)
		return (0);
	for (i = 0; n; i++)
	{
		pal_num[len - i - 1] = n % 10;
		n = n / 10;
	}
	for (j = 0; j < len / 2; j++)
	{
		if (pal_num[j] != pal_num[len - 1 - j])
			return (-1);
	}
	free(pal_num);
	return (1);
}
void print(void)
{
	int i, num = 0, j, r = 0;

	for (i = 900; i < 1000; i++)
	{
		for (j = 900; j < 1000; j++)
		{
			r = 0;
			num = j * i;
			r = pal(num);
			if (r == 1)
				printf("%d = %d * %d, ", num, i, j);
		}
		if (i == 999)
			printf("\n");
	}
}
int main(void)
{
	print();
	return (0);
}
