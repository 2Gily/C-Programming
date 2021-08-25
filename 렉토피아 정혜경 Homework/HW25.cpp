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
			printf("\n\n우와~ 맞았당~~~ 추카추카 %d 번째 만에 맞추셨습니다. \n\n", count);
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
		printf("# 숫자를 입력하시오 : ");
		scanf("%d", &user_number);

		if (user_number >= 1 && user_number <= 100)
		{
			clearBuffer();
			break;
		}
		printf("1 ~ 100 사이의 정수를 입력해주세요.\n\n");
		clearBuffer();
	}

	return user_number;
}

void outputResult(int low_number, int high_number)
{
	printf("%d 보다는 크고 %d 보다는 작습니다.\n\n",low_number,high_number);
}