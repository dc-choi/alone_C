#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int result;

	result = (a > b);
	printf("a > b : %d\n", result);

	result = (a >= b);
	printf("a >= b : %d\n", result);

	result = (a < b);
	printf("a < b : %d\n", result);

	result = (a <= b);
	printf("a <= b : %d\n", result);

	result = (a <= b);
	printf("a <= b : %d\n", result);

	result = (a <= c);
	printf("a <= c : %d\n", result);

	result = (a == b);
	printf("a == b : %d\n", result);

	result = (a != c);
	printf("a != c : %d\n", result);
	
	return 0;
}