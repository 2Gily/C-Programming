#include<stdio.h>

int inputNumber(void);
void outputStar(int number);

int main(void)
{
	outputStar(inputNumber());

	return 0;
}

int inputNumber(void)
{
	int number;

	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &number);

	return number;
}

void outputStar(int number)
{
	int i = 0;

	while (i < number)
	{
		if (i % 5 == 0 && i != 0)
		{
			printf("\n");
		}

		printf("*");

		i++;
	}

	printf("\n");
}