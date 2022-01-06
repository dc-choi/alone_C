#include <stdio.h>

int main(void)
{
	int a, b, total;
	double avg;

	printf("두 과목의 점수 : ");
	scanf("%d %d", &a, &b);
	total = a + b;
	avg = total / 2.0;

	printf("평균 : %.1lf", avg);

	return 0;
}