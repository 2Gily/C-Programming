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

	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%lf", &temperature);

	return temperature;
}

void outputTemperature(double temperature)
{
	double temperature_c;

	temperature_c = (5.0 / 9.0)*(temperature - 32.0);

	printf("���� �µ��� %.1lf�� �Դϴ�. \n", temperature_c);
}