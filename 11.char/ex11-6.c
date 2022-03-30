#include <stdio.h>

int main(void)
{
	int num;
	int grade;

	printf("학번 입력: ");
	scanf("%d", &num);
	getchar(); // 버퍼에 남아있는 문자를 비워낸다.
	printf("학점 입력: ");
	grade = getchar();
	printf("학번: %d, 학점: %c\n", num, grade);

	return 0;
}