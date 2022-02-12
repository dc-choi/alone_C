#include <stdio.h>

int main(void)
{
	int score[6];
	int count = sizeof(score)/ sizeof(int);

	for (int idx = 0; idx < 6; idx++)
	{
		if (idx < 3)
		{
			score[idx] = idx + 1;
		}
		else
		{
			score[idx] = 0;
		}
	}

	for (int idx = 0; idx < 6; idx++)
	{
		printf("%5d", score[idx]);
	}
	
	return 0;
}