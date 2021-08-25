#include<stdio.h>

void myflush(void);
void outputLine(void); // 구분선을 출력하는 함수
int menu(void);
void openFan(unsigned char* fan_state);
void offFan(unsigned char* fan_state);
void reverseFan(unsigned char* fan_state);
void displayFan(unsigned char* fan_state);

int main(void)
{
	int menu_num;
	unsigned char fan_state = 0;

	while (1)
	{
		menu_num = menu();

		switch (menu_num)
		{
			case 1:
			{
				openFan(&fan_state);
				displayFan(&fan_state);
				break;
			}
			case 2:
			{
				offFan(&fan_state);
				displayFan(&fan_state);
				break;
			}
			case 3:
			{
				reverseFan(&fan_state);
				displayFan(&fan_state);
				break;
			}
			default:
			{
				break;
			}
		}

		if (menu_num == 4) break;
	}

	return 0;
}

void myflush(void)
{
	char ch;
	while (ch = getchar() != '\n');
}

void outputLine(void) // 구분선을 출력하는 함수
{
	int i = 0;
	int field_size = 66;

	for (i = 0; i <= field_size; i++)
	{
		if(i == 0) printf("\n");

		printf("-");

		if (i == field_size) printf("\n");
	}
}

int menu(void)
{
	int menu_num;
	int check;
	
	while(1)
	{
		printf("\n1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		check = scanf("%d", &menu_num);

		if ((menu_num >= 1 && menu_num <= 4) && check == 1)
		{
			myflush();
			return menu_num;
		}
		printf("\n* 잘못 입력하셨습니다. 다시 입력해주세요\n"); 
		myflush();
	}
}

void openFan(unsigned char* fan_state) 
{
	unsigned char on_fan;
	
	outputLine();
	printf("\n%45s\n","Fan 열기 작업 실행 화면");
	outputLine();

	printf("\n* OPEN할 FAN 번호를 입력하시오(1-8) : ");

	while (1)
	{
		scanf("%hhu", &on_fan);

		if (on_fan >= 1 && on_fan <= 8)
		{
			*fan_state = *fan_state | (unsigned char)1 << --on_fan;
			myflush();
			break;
		}
		printf("\n* 잘못 입력하였습니다. 1 ~ 8 범위의 정수를 입력해주세요 : ");
		myflush();
	}
}

void offFan(unsigned char* fan_state)
{
	unsigned char off_fan;

	outputLine();
	printf("\n%45s\n", "Fan 닫기 작업 실행 화면");
	outputLine();

	printf("\n* CLOSE할 FAN 번호를 입력하시오(1-8) : ");

	while (1)
	{
		scanf("%hhu", &off_fan);

		if (off_fan >= 1 && off_fan <= 8)
		{
			*fan_state = *fan_state & ~((unsigned char)1) << --off_fan;
			myflush();
			break;
		}
		printf("\n* 잘못 입력하였습니다. 1 ~ 8 범위의 정수를 입력해주세요 : ");
		myflush();
	}
}

void reverseFan(unsigned char* fan_state)
{
	outputLine();
	printf("\n%45s\n", "Fan 전체 전환 작업 실행 화면");
	outputLine();
	printf("\n전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n");
	*fan_state = *fan_state ^ (unsigned char)255;
}

void displayFan(unsigned char* fan_state)
{
	int i;

	outputLine();
	printf("\n 8번FAN  7번FAN  6번FAN  5번FAN  4번FAN  3번FAN  2번FAN  1번FAN\n");
	for (i = 7; i >= 0; i--)
	{
		if ((*fan_state & 1 << i) == (1 << i))
		{
			printf("%6s  ","ON");
		}
		else
		{
			printf("%6s  ", "OFF");
		}

		if (i == 0) printf("\n");
		
	}
	outputLine();
}