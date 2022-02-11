#include <stdio.h>

int rec_func(int n)
{
	if (n < 1) return n;
	return n + rec_func(n - 1);
}

int main(void)
{
	int cnt = rec_func(10);
	printf("1부터 10까지의 합 : %d", cnt);

	return 0;
}