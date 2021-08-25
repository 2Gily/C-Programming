#include<stdio.h>
void myflush(void);
void inputArray(double *array_name,int size);
double maxNumber(double *array_name, int size);
double minNumber(double *array_name, int size);
void outputResult(double max, double min);

int main(void)
{
	double max, min;
	double number[5];
	int size = sizeof(number) / sizeof(number[0]);

	inputArray(number, size);
	max = maxNumber(number,size);
	min = minNumber(number, size);
	outputResult(max, min);

	return 0;
}

void myflush(void)
{
	char ch;
	while (ch = getchar() != '\n');
}

void inputArray(double *array_name, int size)
{
	int i = 0;
	int check;

	for (i = 0; i < size; i++)
	{
		while(1)
		{
			printf("%d �� �� �� : ", i);
			check = scanf("%lf", &array_name[i]);

			if (check == 1)
			{
				myflush();
				break;
			}
			printf("���ڸ� �Է��ϼ̽��ϴ�. ���ڸ� �Է��� �ּ���.\n\n");
			//myflush();
		}
	}
}

double maxNumber(double *array_name, int size)
{
	int i = 0;
	double max = array_name[0];

	for (i = 0; i < size; i++)
	{
		if (array_name[i] > max)
		{
			max = array_name[i];
		}
	}
	return max;
}

double minNumber(double *array_name, int size)
{
	int i = 0;
	double min = array_name[0];

	for (i = 0; i < size; i++)
	{
		if (array_name[i] < min)
		{
			min = array_name[i];
		}
	}
	return min;
}

void outputResult(double max, double min)
{
	printf("\n\n���� ū �� : %.2lf\n",max);
	printf("���� ���� �� : %2.2lf\n", min);

	return;
}