#include <stdio.h>

int main(void)
{
	int a;
	char str[20];

	printf("정수 a의 값을 입력하세요 : ");
	scanf("%d", &a);

	if (a < 0)
		a = -a;

	if (a % 2 == 0)
		printf("%s", "짝수입니다.");
	else
		printf("%s", "홀수입니다.");

	return 0;
}