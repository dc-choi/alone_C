#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = (int)time;
	printf("%d시 %d분 %d초", hour, min, sec);

	return 0;
}