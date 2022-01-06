#include <stdio.h>

double average(double x, double y);

int main(void)
{
	double result = average(1.5, 3.4);
	printf("result : %lf", result);

	return 0;
}

double average(double x, double y)
{
	double temp = x + y;
	
	return (temp / 2.0);
}