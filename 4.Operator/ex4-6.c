#include <stdio.h>

int main(void)
{
	int a = 30;
	int result;

	result = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", result);

	result = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", result);

	result = !(a >= 30);
	printf("!(a >= 30) : %d\n", result);

	return 0;
}