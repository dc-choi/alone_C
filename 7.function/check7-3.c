#include <stdio.h>

double centi_to_meter(double x);

int main(void)
{
	double result = centi_to_meter(187);
	printf("%.2lfm", result);

	return 0;
}

double centi_to_meter(double x)
{
	return (x / 100);
}