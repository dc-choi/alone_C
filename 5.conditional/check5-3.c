#include <stdio.h>

int main(void)
{
	double height;
	double weight;

	printf("이상형의 키, 몸무게를 입력하시오. : ");
	scanf("%lf %lf", &height, &weight);

	if ((height >= 180.0) && (weight < 80))
		printf("ok");
	else
		printf("no");

	return 0;
}