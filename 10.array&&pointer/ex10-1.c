#include <stdio.h>

int main(void)
{
	int arr[3];
	int idx;

	*(arr + 0) = 10;
	*(arr + 1) = *(arr + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력: ");
	scanf("%d", arr + 2);

	for (idx = 0; idx < 3; idx++)
		printf("%5d", *(arr + idx));
	
	return 0;
}