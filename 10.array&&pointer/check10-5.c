#include <stdio.h>

void print_month(int *mp)
{
	while (*mp)
	{
		printf("%5d", *mp);
		if (*mp % 5 == 0) printf("\n");
		mp++;
	}
}

int main(void)
{
	int month[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, '\0' };
	print_month(month);

	return 0;
}