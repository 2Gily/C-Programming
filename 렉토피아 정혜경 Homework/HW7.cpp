#include<stdio.h>

double inputDistance(void);
double inputVelocity(void);
void outputResult(double distance, double velocity);

int main(void)
{
	double distance, velocity;

	distance = inputDistance();
	velocity = inputVelocity();
	outputResult(distance, velocity);

	return 0;
}

double inputDistance(void)
{
	double distance;

	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &distance);

	return distance;
}
double inputVelocity(void)
{
	double velocity;

	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &velocity);

	return velocity;
}
void outputResult(double distance, double velocity)
{
	int hour,min;
	double sec;
	double time,temp_time;

	time =  distance/ velocity;

	hour = (int)time;
	temp_time = (time - hour)*60.0;

	min = (int)temp_time;
	temp_time = (temp_time - min)*60.0;

	sec = temp_time;

	printf("%.2lf km => %d시간 %d분 %.3lf초 소요됨\n", distance, hour, min, sec);
}