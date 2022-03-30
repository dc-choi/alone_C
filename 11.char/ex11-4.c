#include <stdio.h>

int main(void)
{
	char ch;
	int idx;

	for (idx = 0; idx < 3; idx++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}