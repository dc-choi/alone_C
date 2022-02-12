#include <stdio.h>

int main(void)
{
	int score[5];
	int idx;
	int total = 0;
	double avg;

	for (idx = 0; idx < 5; idx++)
	{
		scanf("%d", &score[idx]);
	}

	for (idx = 0; idx < 5; idx++)
	{
		total += score[idx];
	}
	avg = total / 5.0;

	for (idx = 0; idx < 5; idx++)
	{
		printf("%5d", score[idx]);
	}
	printf("\n");
	
	printf("평균 : %.2lf\n", avg);
	
	return 0;
}