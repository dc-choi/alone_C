#include <stdio.h>

int main(void)
{
	int a = 10;
	int *pa = &a;
	double *pd = pa; // int와 double의 자료형이 달라서 할당되지 않는 영역까지 사용하므로 경고 메세지 발생

	printf("%lf\n", *pd);
	
	return 0;
}