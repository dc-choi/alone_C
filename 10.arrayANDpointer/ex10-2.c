#include <stdio.h>

int main(void)
{
	int arr[3];
	int *p = arr;
	int idx;

	*p = 10;
	*(p + 1) = 20;
	p[2] = p[0] + p[1];

	for (idx = 0; idx < 3; idx++)
		printf("%5d", p[idx]);
	
	return 0;
}