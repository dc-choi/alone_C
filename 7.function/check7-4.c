#include <stdio.h>

void sum(int count)
{
	int i = 1;
	int sum = 0;

	while (i <= count)
	{
		sum = sum + i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", count, sum);
}

int main(void)
{
	sum(10);
	sum(100);

	return 0;
}