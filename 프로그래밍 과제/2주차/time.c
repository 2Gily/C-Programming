#include<stdio.h>

int main()
{
	int dis, vel, hour, min;
	double time, sec;

	printf("�Ÿ��� �ӷ� �Է� : ");
	scanf("%d %d", &dis, &vel);

	time = (double)dis / (double)vel;
	hour = (int)time;
	time -= hour;
	time *= 60.0;
	min = (int)time;
	time -= min;
	time *= 60.0;
	sec = time;

	printf("�ҿ�ð��� %d �ð� %d �� %.3lf ���Դϴ�.",hour, min, sec);

	return 0;

}