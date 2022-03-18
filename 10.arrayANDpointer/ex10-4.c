#include <stdio.h>

int main(void)
{
	int arr[6] = { 10, 20, 30, 40, 50, '\0' };
	int *pa = arr;
	int *pb = pb + 3;

	printf("pa : %p\n", pa);
	printf("pb : %p\n", pb);

	pa++;
	printf("pb - pa : %p\n", pb - pa);

	printf("앞에 있는 배열의 요소의 값 출력 : ");
	if (pa < pb)
	{
		printf("pa : ");	
		printf("%d\n", *pa);	
	}
	else
	{
		printf("pb : ");
		printf("%d\n", *pb);
	}
	
	return 0;
}