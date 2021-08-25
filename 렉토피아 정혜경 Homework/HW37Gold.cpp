#include<stdio.h>

int inputDay(void);

int main(void)
{
	int day,day_count=1;
	int i, j;
	int gold = 1, sum_gold = 0;

	day = inputDay();

	for (i = 0; i < day; i++)
	{
		if ( day_count == 0)
		{
			gold++;
			day_count = gold;
		}

		sum_gold += gold;
		day_count--;
	}

	printf("근무일 : %d / 총 금화 수 : %d개\n", day, sum_gold);

	return 0;
}

int inputDay(void)
{
	int day;

	while (1)
	{
		printf("기사의 근무일수를 입력하시오 : ");
		if ((scanf("%d", &day) != 0) && ((day > 0) && day<201))
		{
			while (getchar() != '\n');
			break;
		}
		while (getchar() != '\n');
		printf("!! 1이상 200이하의 정수를 입력해주세요 \n\n");
	}

	return day;
}