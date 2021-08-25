#include<stdio.h>

int main(void)
{
	int hour , minute , second;
	int hour_time, minute_time, second_time;
	int time = 0, original_time = 0;

	time = 54321;
	original_time = time;

	second = 1;
	minute = second * 60;
	hour = minute * 60;

	hour_time = time / hour;
	time -= hour_time * hour;

	minute_time = time / minute;
	time -= minute_time * minute;

	second_time = time / second;
	time -= second_time  * second;

	printf("%d는 %d시간 %d분 %d초 입니다.\n", original_time, hour_time, minute_time, second_time);

	return 0;

	
	
}