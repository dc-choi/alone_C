#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("a의 초기값 : %d\n", a);
	printf("b의 초기값 : %d\n", b);
	printf("(++a) * 3 = %d\n", pre);
	printf("(b++) * 3 = %d\n", post);
	
	return 0;
}