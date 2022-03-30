#include <stdio.h>

int main(void)
{
	int ch = getchar();
	int count = 0;

	while (ch != '\n')
	{
		if (ch >= 97 && ch <= 122) count++;
		ch = getchar();
	}

	printf("소문자의 갯수: %d", count);

	return 0;
}