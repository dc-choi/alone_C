#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double result;

	result = ((double)a / (double)b);
	printf("a, b : %d %d\n", a, b);
	printf("(double)a / (double)b : %.1lf\n", result);

	a = (int)result;
	printf("(int)result : %d\n", a);

	return 0;
}