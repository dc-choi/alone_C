#include <stdio.h>

int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = ((double)audience / (double)seats) * 100;

	printf("%.1lf%%", rate);

	return 0;
}