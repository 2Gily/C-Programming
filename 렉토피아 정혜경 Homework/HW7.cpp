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

	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &distance);

	return distance;
}
double inputVelocity(void)
{
	double velocity;

	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
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

	printf("%.2lf km => %d�ð� %d�� %.3lf�� �ҿ��\n", distance, hour, min, sec);
}