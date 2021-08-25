#include<stdio.h>

int inputNumber(void);
void transBinary(int number);

int main(void)
{
	int number;

	number = inputNumber();
	transBinary(number);

	return 0;
}

int inputNumber(void)
{
	int number;
	int check;

	while (1)
	{
		printf("*10�� ������ �Է��Ͻÿ� : ");
		check = scanf("%d", &number);

		if (check == 1) break;

		printf("�߸� �Է��Ͽ����ϴ�. 10�� ������ �Է����ּ���!! \n");
	}
	return number;
}

void transBinary(int number)
{
	int i = 0;
	int scope = sizeof(i)*8;

	printf("%d(10) = ", number);

		for (i = scope-1; i >=0; i--)
		{
			if (number &(1<<i))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}

		printf("(2)");
		printf("\n");
}