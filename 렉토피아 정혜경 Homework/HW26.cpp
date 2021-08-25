#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(void);
void clearBuffer(void);
int inputNumber(void);
int outputResult(int user_number,int computer_number);

int main(void)
{
	int computer_number;
	int user_number;
	int check;
	int win = 0, draw = 0;

	srand((unsigned)time(NULL));

	while (1)
	{
		computer_number = random();
		user_number = inputNumber();

		check = outputResult(user_number, computer_number);

		if (check  < 0)
		{
			break;
		}
		else if (check > 0)
		{
			win++;
		}
		else if (check == 0)
		{
			draw++;
		}
		
	}
	
	printf("\n\n���Ӱ�� : %d �� %d ��\n\n", win, draw);

	return 0;
}

int random(void)
{
	int random_result;
	random_result = (rand() % 3) +1;

	return random_result;
}

void clearBuffer(void)
{
	char ch;

	while (ch = getchar() != '\n');
}

int inputNumber(void)
{
	int number;

	while (1)
	{
		printf("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		scanf("%d", &number);

		if (number >= 1 && number <= 3)
		{
			clearBuffer();
			break;
		}

		printf("1, 2, 3�� ���� �߿��� �ϳ��� �Է����ּ���!!\n\n");
		clearBuffer();
	}

	return number;

}

int outputResult(int user_number, int computer_number)
{
	int result;
	
	if (user_number == 1)
	{
		switch (computer_number)
		{
		case 1:
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n\n");
			result = 0;
			break;
		case 2:
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n\n");
			result = -1;
			break;
		case 3:
			printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n\n");
			result = 1;
			break;
		default:
			break;
		}
	}
	else if (user_number == 2)
	{
		switch (computer_number)
		{
		case 1:
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n\n");
			result = 1;
			break;
		case 2:
			printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n\n");
			result = 0;
			break;
		case 3:
			printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n\n");
			result = -1;
			break;
		default:
			break;
		}
	}
	else if (user_number == 3)
	{
		switch (computer_number)
		{
		case 1:
			printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n\n");
			result = -1;
			break;
		case 2:
			printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n\n");
			result = 1;
			break;
		case 3:
			printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n\n");
			result = 0;
			break;
		default:
			break;
		}
	}
	
	return result;
}