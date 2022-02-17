#include <stdio.h>

int main(void)
{
	int a = 10;
	int *pa = &a;
	*pa = 20;
	printf("%d\n", a);

	return 0;
}