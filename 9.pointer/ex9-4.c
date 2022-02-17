#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;

	const int *pa = &a; // 변수 *pa는 그 값을 변경 할 수 없다. (const *pa = 20;으로 바꿀수없다.)

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	return 0;
}