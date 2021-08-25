#include <stdio.h>

int main(void)
{
	double time = 365.2422;
	double temp_time = (time - (int)time) * 24 * 60 * 60;
	int day, hour, min;
	double sec;

	day = (int)time;

	hour = (int)((temp_time) / (60.0 * 60.0));

	temp_time = temp_time - hour *(60.0*60.0);

	min = (int)(temp_time / 60.0);

	temp_time = temp_time - (double)(min * 60);

	sec = temp_time;
	
	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초 입니다.\n",time, day, hour , min, sec);

	return 0;
}
