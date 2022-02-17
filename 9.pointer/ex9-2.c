#include <stdio.h>

int main(void)
{
	int a;
	int *pa;

	pa = &a;
	*pa = 10;

	printf("int형 변수의 주소 : %d\n", a);
	printf("double형 변수의 주소 : %d\n", *pa);

	return 0;
}