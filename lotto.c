#include <stdio.h>

void print_num(int *num)
{
	while (*num)
	{
		printf("%5d", *num);
		num++;
	}
}

void input_num(int *num)
{
	int idx;
	int index;
	for (idx = 0; idx < 6; idx++)
	{
		scanf("%d", num + idx);
		for (index = 0; index < idx; index++)
		{
			if (num[idx] == num[index])
			{
				printf("같은 번호가 있습니다!");
				idx--;
				break;
			}
		}
	}
	num[idx] = '\0';
}

int main(void)
{
	int lotto_num[6];
	input_num(lotto_num);
	print_num(lotto_num);

	return 0;
}