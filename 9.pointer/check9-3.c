#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;

	int *pa = &a;
	int *pb = &b;
	int *pt = pa;

	pa = pb;
	pb = pt;

	printf("%d, %d\n", *pa, *pb);

	return 0;
}