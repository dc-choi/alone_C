#include <stdio.h>

int main(void)
{
	int result;

	result = sizeof(short) > sizeof(long) ? 1 : 0;

	printf("%s\n", result ? "short" : "long");

	return 0;
}