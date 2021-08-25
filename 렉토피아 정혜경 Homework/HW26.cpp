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
	
	printf("\n\n게임결과 : %d 승 %d 무\n\n", win, draw);

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
		printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		scanf("%d", &number);

		if (number >= 1 && number <= 3)
		{
			clearBuffer();
			break;
		}

		printf("1, 2, 3의 숫자 중에서 하나를 입력해주세요!!\n\n");
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
			printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n\n");
			result = 0;
			break;
		case 2:
			printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 졌습니다.\n\n");
			result = -1;
			break;
		case 3:
			printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n\n");
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
			printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n\n");
			result = 1;
			break;
		case 2:
			printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n\n");
			result = 0;
			break;
		case 3:
			printf("당신은 바위 선택, 컴퓨터는 보 선택 : 졌습니다.\n\n");
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
			printf("당신은 보 선택, 컴퓨터는 가위 선택 : 졌습니다.\n\n");
			result = -1;
			break;
		case 2:
			printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n\n");
			result = 1;
			break;
		case 3:
			printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n\n");
			result = 0;
			break;
		default:
			break;
		}
	}
	
	return result;
}