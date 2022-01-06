#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res = 2;

	res = (a > b) ? a : b;

	printf("res:%d\n", res);

	return 0;
}