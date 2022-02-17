#include <stdio.h>

void swap(double *x, double *y)
{
	double temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void line_up(double *x, double *y, double *z)
{
	if (*x < *y)
		swap(x, y);
	if (*y < *z)
		swap(y, z);
	if (*x < *z)
		swap(x, z);
}

int main(void)
{
	double min;
	double max;
	double mid;

	printf("실수값 3개 입력 : ");
	scanf("%lf %lf %lf", &min, &mid, &max);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}