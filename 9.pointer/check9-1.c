#include <stdio.h>

int main(void)
{
	char ch = 'A';
	int in = 10;
	double db = 3.14;

	printf("%p\n", &ch);
	printf("%p\n", &in);
	printf("%p\n", &db);
	printf("%p\n", *&ch);
	printf("%p\n", *&in);
	printf("%p\n", *&db);

	return 0;
}