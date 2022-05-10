#include <stdio.h>

int main(void)
{
	char checkStr[80];

	printf("문자열 다시 입력: ");
	scanf("%s", checkStr); // 공백이나 탭, 개행 문자가 있으면 그 전까지 저장 함.
	printf("출력: %s\n", checkStr);

	return 0;
}