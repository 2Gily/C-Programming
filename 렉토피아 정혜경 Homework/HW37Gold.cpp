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

	printf("�ٹ��� : %d / �� ��ȭ �� : %d��\n", day, sum_gold);

	return 0;
}

int inputDay(void)
{
	int day;

	while (1)
	{
		printf("����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
		if ((scanf("%d", &day) != 0) && ((day > 0) && day<201))
		{
			while (getchar() != '\n');
			break;
		}
		while (getchar() != '\n');
		printf("!! 1�̻� 200������ ������ �Է����ּ��� \n\n");
	}

	return day;
}