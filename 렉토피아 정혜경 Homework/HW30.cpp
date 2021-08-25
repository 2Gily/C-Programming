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
		printf("*10진 정수를 입력하시오 : ");
		check = scanf("%d", &number);

		if (check == 1) break;

		printf("잘못 입력하였습니다. 10진 정수를 입력해주세요!! \n");
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