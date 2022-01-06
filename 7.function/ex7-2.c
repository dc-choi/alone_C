#include <stdio.h>

int get_num(void);

int main(void)
{
	int result = get_num();
	printf("result : %d", result);

	return 0;
}

int get_num(void)
{
	int num;

	printf("input integer : ");
	scanf("%d", &num);

	return num;
}