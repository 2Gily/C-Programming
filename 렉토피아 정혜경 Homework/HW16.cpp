#include<stdio.h>

int inputStation(void);
int fareCaculator(int station);
void outputFare(int fare);

int main(void)
{
	int station, fare, i=0;

	for (i = 0; i < 5; i++)
	{
		station = inputStation();
		fare = fareCaculator(station);
		outputFare(fare);
	}

	return 0;
}

int inputStation(void)
{
	int station;

	printf("역수를 입력하시오 : ");
	scanf("%d", &station);

	return station;
}

int fareCaculator(int station)
{
	int fare = 0;

	if (station > 0 && station <= 5)
	{
		fare = 600;
	}
	else if (station > 5 && station <= 10)
	{
		fare = 800;
	}
	else if (station > 10)
	{
		fare = 800 + ((station - 9) / 2) * 100;
	}

	return fare;
}

void outputFare(int fare)
{
	printf("요금 : %d원\n", fare);
}