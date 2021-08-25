#include<stdio.h>

int main()
{
	int dis, vel, hour, min;
	double time, sec;

	printf("거리와 속력 입력 : ");
	scanf("%d %d", &dis, &vel);

	time = (double)dis / (double)vel;
	hour = (int)time;
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = time;

	printf("소요시간은 %d 시간 %d 분 %.3lf 초입니다.",hour, min, sec);

	return 0;

}