#include <stdio.h>

int main(void)
{
	int score[5];
	int idx;
	int total = 0;
	double avg;
	int count = sizeof(score) / sizeof(int);

	for (idx = 0; idx < count; idx++)
	{
		scanf("%d", &score[idx]);
	}

	for (idx = 0; idx < count; idx++)
	{
		total += score[idx];
	}
	avg = total / (double)count;

	for (idx = 0; idx < count; idx++)
	{
		printf("%5d", score[idx]);
	}
	printf("\n");
	
	printf("평균 : %.2lf\n", avg);
	
	return 0;
}