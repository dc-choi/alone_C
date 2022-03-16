#include <stdio.h>

void print_arr(int *ptr)
{
	while (*ptr)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
}

int main(void)
{
	int arr[6] = { 10, 20, 30, 40, 50, '\0' };
	print_arr(arr);
	
	return 0;
}