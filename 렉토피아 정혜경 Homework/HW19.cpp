#include<stdio.h>

int inputYear(void);
int yearCheck(int year);
void outputResult(int year, int yearcheck);

int main(void)
{
	int year;

		year = inputYear();
		outputResult(year, yearCheck(year));

	return 0;
}

int inputYear(void)
{
	int year;

	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);

	return year;
}

int yearCheck(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

void outputResult(int year, int yearcheck)
{
	if (yearcheck == 0)
	{
		printf("%d���� ���(Common year)�Դϴ�.\n",year);
	}
	else
	{
		printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	}
}