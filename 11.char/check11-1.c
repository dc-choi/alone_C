#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력: ");
	scanf("%c", &ch);
	printf("%c 문자의 아스키 코드값 : %d", ch, ch);

	return 0;
}