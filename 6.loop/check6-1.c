#include <stdio.h>

int main(void)
{
	int a;

	printf("정수를 입력하시오. : ");
	scanf("%d", &a);

	while (a < 0)
	{
		printf("정수를 입력하시오. : ");
		scanf("%d", &a);
	}

	for (int i = 0; i < 5; i++)
		printf("Be Happy\n");
}