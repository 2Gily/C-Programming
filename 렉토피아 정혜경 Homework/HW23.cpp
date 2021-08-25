#include<stdio.h>

int main(void)
{
	int number1, number2;
	int check;

	while (1)
	{
		printf("두개의 정수를 입력하세요 : ");
		check = scanf("%d %d", &number1, &number2);
		
		if (check != 2)
		{
			break;
		}
		if (number1 > number2)
		{
			printf("%d - %d = %d\n", number1, number2, number1 - number2);
		}
		else
		{
			printf("%d - %d = %d\n", number2, number1, number2 - number1);
		}

	}

	return 0;
}