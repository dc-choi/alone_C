#include <stdio.h>

int main(void)
{
	int a, b, c;
	double da;
	char ch;

	a = 10;
	b = 20;
	c = a + b;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d", a);
	printf("변수 b의 값 : %d", b);
	printf("변수 c의 값 : %d", c);
	printf("변수 da의 값 : %.1lf", da);
	printf("변수 ch의 값 : %c", ch);

	return 0;
}