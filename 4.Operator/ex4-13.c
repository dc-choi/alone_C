#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b); // and
	printf("a | b : %d\n", a | b); // or
	printf("a ^ b : %d\n", a ^ b); // xor
	printf("~a : %d\n", ~a); // not
	printf("a << 1 : %d\n", a << 1); // bit move(left)
	printf("a >> 2 : %d\n", a >> 2); // bit move(right)

	return 0;
}