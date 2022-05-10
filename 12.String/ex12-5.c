#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력: ");
	fgets(str, sizeof(str), stdin); // fgets는 개행문자까지 전부 버퍼에 저장하고 널 문자를 붙인다.
	str[strlen(str) - 1] = '\0';
	printf("입력된 문자열은 %s입니다\n", str);

	return 0;
}