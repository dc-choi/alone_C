#include <stdio.h>

int poly(int x)
{
	return ((2 * x * x) + (3 * x));
}

int func(int x)
{
	int res = poly(x);
	if (res >= 0) return res;
	return -res;
}

int main(void)
{
	printf("%d\n", func(-3)); // 9

	return 0;
}