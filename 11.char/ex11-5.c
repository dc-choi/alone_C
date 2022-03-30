#include <stdio.h>

int main(void)
{
	char str[100];
	int size = sizeof(str);
	int idx = 0;

	int ch = getchar();

	while (ch != '\n' && idx < size - 1)
	{
		str[idx] = ch;
		idx++;
		ch = getchar();
	}
	str[idx] = '\0';

	printf("입력한 문자열: %s\n", str);


	return 0;
}