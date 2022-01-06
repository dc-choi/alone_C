#include <stdio.h>

int main(void)
{
	int a, b, result;
	char op;

	printf("사칙연산 입력 (정수) : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	}

	printf("%d %c %d = %d", a, op, b, result);

	return 0;
}