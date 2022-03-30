#include <stdio.h>

int main(void)
{
	int ch = getchar();
	int count = 0;
	int result = 0;

	while (ch != EOF)
	{
		if (ch == '\n')
		{
			if (count > result) result = count;
			count = 0;
			ch = getchar();
			continue;
		}
		count++;
		ch = getchar();
	}

	printf("가장 긴 단어의 길이: %d", result);

	return 0;
}