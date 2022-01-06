#include <stdio.h>

int main(void)
{
	int input;
	int result;
	int count = 0;

	printf("2이상의 정수를 입력하시오. : ");
	scanf("%d", &input);

	while (input < 2)
		scanf("%d", &input);

	for (int i = 2; i < input; i++)
	{
		result = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				result = 0;
				break;
			}
		}

		if (result)
		{
			printf("%d\t", i);
			count++;
			if (count % 5 == 0)
				printf("\n");
		}
	}

	return 0;
}