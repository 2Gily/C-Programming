#include<stdio.h>

int inputNumber(void);

int main(void)
{
	int i, initial_value = 1, pre_number = 0, prepre_number = 0, now_number = initial_value;
	long long sum = initial_value;
	int number = inputNumber();

	for (i = 0; i < number; i++)
	{
		if (i == 0)
		{
			printf("%d +", now_number);
			continue;
		}
		prepre_number = pre_number;
		pre_number = now_number;
		now_number = prepre_number + pre_number;
		sum += now_number;
		printf(" %d +", now_number);
	}

	printf("\b= %d\n", sum);

	return 0;
}

int inputNumber(void)
{
	int number;

	while (1)
	{
		printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
		if ((scanf("%d", &number) != 0) && (number >= 0))
		{
			while (getchar() != '\n');
			break;
		}
		while (getchar() != '\n');
		printf("! 1�̻��� ������ �Է����ּ��� \n\n");
	}

	return number;
}