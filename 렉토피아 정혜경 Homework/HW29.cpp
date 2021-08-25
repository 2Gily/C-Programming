#include<stdio.h>

void clearBuffer(void);
int inputUInt(void);
int inputStartnum(void);
int inputEndnum(int start_number);
int transNumber(int number);
void outputResult(int start_number, int end_number, int number);


int main()
{
	int number;
	int start_number;
	int end_number;

	start_number = inputStartnum();

	end_number = inputEndnum(start_number);

	number = inputUInt();

	outputResult(start_number, end_number,number);

	return 0;
}

void clearBuffer(void)
{
	char ch;

	while (ch = getchar() != '\n');
}

int inputStartnum(void)
{
	int start_number;

	while (1)
	{
		printf("시작 값(P1) : ");
		scanf("%d", &start_number);

		if (start_number >= 100 && start_number <= 10000)
		{
			clearBuffer();
			break;
		}
		printf("100 ~ 10000 사이의 정수를 입력해주세요.\n\n");
		clearBuffer();
	}

	return start_number;
}

int inputEndnum(int start_number)
{
	int end_number;

	while (1)
	{
		printf("끝 값(P2) : ");
		scanf("%d", &end_number);

		if (end_number >= start_number && end_number <= 10000)
		{
			clearBuffer();
			break;
		}
		printf("%d ~ 10000 사이의 정수를 입력해주세요.\n\n", start_number);
		clearBuffer();
	}

	return 	end_number;
}

int inputUInt(void)
{
	int number;
	int ending_number;

	while (1)
	{
		printf("고집수(N) : ");
		scanf("%d", &number);

		if (number >= 1 && number <= 10)
		{
			clearBuffer();
			break;
		}
		printf("1 ~ 10 사이의 정수를 입력해주세요.\n\n");
		clearBuffer();
	}

	return number;
}

int transNumber(int number)
{
	int n_1000;
	int n_100;
	int n_10;
	int n_1;
	int count = 0;

	while (1)
	{
		if (number < 10) break;

		if (number == 10000)
		{
			count++;
			break;
		}
		else if (number >= 1000)
		{
			n_1000 = number / 1000;
			number = number % 1000;
			n_100 = number / 100;
			number = number % 100;
			n_10 = number / 10;
			number = number % 10;
			n_1 = number;

			number = n_1000 * n_100 * n_10 * n_1;

			count++;
		}
		else if (number >= 100)
		{
			n_100 = number / 100;
			number = number % 100;
			n_10 = number / 10;
			number = number % 10;
			n_1 = number;

			number = n_100 * n_10 * n_1;

			count++;
		}
		else if (number >= 10)
		{
			n_10 = number / 10;
			number = number % 10;
			n_1 = number;

			number = n_10 * n_1;

			count++;
		}
	}

	return count;
}

void outputResult(int start_number,int end_number,int number)
{
	int i;
	int count=0;

	printf("\n고집수가 %d인 숫자 출력\n\n", number);

	for (i = start_number; i <= end_number; i++)
	{
		if (transNumber(i) == number)
		{
			printf("%d\n", i);
			count++;
		}
	}

	printf("\n총 개수 : %d\n\n", count);
}