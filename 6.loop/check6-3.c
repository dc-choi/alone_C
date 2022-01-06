#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("Be Happy\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Be Happy\n");
			if (j == 2)
				break;
		}
	}

	return 0;
}