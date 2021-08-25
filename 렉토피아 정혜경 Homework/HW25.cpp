#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(int range);
void clearBuffer(void);
int inputNumber(void);
void outputResult(int low_number, int high_number);

int main(void)
{
	int range = 100;
	int right_number, user_number;
	int maximum = range, minimum = 0;
	int count=0;

	srand((unsigned)time(NULL));

	right_number = random(range);

	while (1)
	{
		user_number = inputNumber();

		count++;

		if (right_number == user_number)
		{
			printf("\n\n���~ �¾Ҵ�~~~ ��ī��ī %d ��° ���� ���߼̽��ϴ�. \n\n", count);
			break;
		}
		else if(right_number > user_number)
		{
			outputResult(user_number,maximum);
			minimum = user_number;
		}
		else
		{
			outputResult(minimum, user_number);
			maximum = user_number;
		}
	}

	return 0;
}

int random(int range)
{
	int result;
	result = (rand() % range) +1;

	return result;
}

void clearBuffer(void)
{
	char ch;

	while (getchar() != '\n');
}

int inputNumber(void)
{
	int user_number;

	while (1)
	{
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &user_number);

		if (user_number >= 1 && user_number <= 100)
		{
			clearBuffer();
			break;
		}
		printf("1 ~ 100 ������ ������ �Է����ּ���.\n\n");
		clearBuffer();
	}

	return user_number;
}

void outputResult(int low_number, int high_number)
{
	printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n\n",low_number,high_number);
}