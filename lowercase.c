#include <stdio.h>

int main(void)
{
	char str[80];
	int idx = 0;
	int count = 0;

	printf("문장 입력 : ");
	scanf("%s", str);
	while (str[idx] != '\0')
	{
		if (str[idx] >= 65 && str[idx] <= 90)
			str[idx] += 32;
		idx++;
	}
	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d", count);

	return 0;
}