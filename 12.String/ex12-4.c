#include <stdio.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력: ");
	gets(str); // 공백이나 탭이 있어도 개행문자가 오기 전까지는 처리 함.
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
}