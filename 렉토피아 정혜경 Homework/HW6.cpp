#include<stdio.h>

double intputTemperature(void);
void outputTemperature(double temperature);

int main(void)
{
	double temperature;

	temperature = intputTemperature();

	outputTemperature(temperature);

	return 0;
}

double intputTemperature(void)
{
	double temperature;

	printf("화씨 온도를 입력하세요 : ");
	scanf("%lf", &temperature);

	return temperature;
}

void outputTemperature(double temperature)
{
	double temperature_c;

	temperature_c = (5.0 / 9.0)*(temperature - 32.0);

	printf("섭씨 온도는 %.1lf도 입니다. \n", temperature_c);
}