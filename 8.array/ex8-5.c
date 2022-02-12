#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80] = "cat";
	char str2[80];

	strcpy(str, "tiger");
	strcpy(str2, str);
	printf("%s %s\n", str, str2);
	
	return 0;
}