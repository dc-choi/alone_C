#include <stdio.h>

int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grage;
	int result;

	credits = kor + eng + mat;
	grage = (kscore + escore + mscore) / 3;
	result = (credits > 10) && (grage > 4.0);

	printf("%d\n", credits);
	printf("%lf\n", grage);
	printf("%d\n", result);

	return 0;
}