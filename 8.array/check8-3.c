#include <stdio.h>

int main(void)
{
	int arr[3] = { 1, 2, 3 };
	int b[10];
	int idx;

	for (idx = 0; idx < (sizeof(b) / sizeof(int)); idx++)
	{
		b[idx] = arr[idx % (sizeof(arr) / sizeof(int))];
	}
	
	for (idx = 0; idx < (sizeof(b) / sizeof(int)); idx++)
	{
		printf("%5d", b[idx]);
	}

	return 0;
}