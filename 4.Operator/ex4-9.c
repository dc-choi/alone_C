#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int 형 변수의 크기 : %d\n", sizeof a);
	printf("double 형 변수의 크기 : %d\n", sizeof b);
	printf("정수형 상수의 크기 : %d\n", sizeof 10);
	printf("2147483648의 크기 : %d\n", sizeof 2147483648);
	printf("실수형 상수의 크기 : %d\n", sizeof 3.4);
	// 식이 필요할 경우 ()
	printf("char 자료형 변수의 크기 : %d\n", sizeof(char));
	// 연산자가 있을경우 ()
	printf("수식의 크기 : %d\n", sizeof(1+1));

	return 0;
}