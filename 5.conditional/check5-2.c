#include <stdio.h>

int main(void)
{
	int chest;
	char size;

	printf("가슴 사이즈를 입력하세요 : ");
	scanf("%d", &chest);

	if (chest <= 90)
		size = 'S';
	else if (chest > 90 && chest <= 100)
		size = 'M';
	else
		size = 'L';

	printf("당신 옷의 사이즈는 : %c입니다.", size);

	return 0;
}