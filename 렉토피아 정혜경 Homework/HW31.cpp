#include<stdio.h>

void myflush(void);
char menu(void);
int inputInt(char *string);
int deposit( int my_money);
int withdraw(int my_money);

int main(void)
{
	char pick_menu = 0;
	int my_money = 0;
	
	while (1)
	{
		printf("* 현재 잔액은 %d원 입니다.\n\n", my_money);

		pick_menu = menu();

		if (pick_menu == 'i') my_money = deposit(my_money);
		else if (pick_menu == 'o') my_money = withdraw(my_money);
		else if (pick_menu == 'q')
		{
			break;
		}
		myflush();
	}

	return 0;
}

void myflush(void) // 버퍼를 비우는 함수
{
	char ch;

	while (ch=getchar() != '\n');
}

char menu(void) // menu 입력하고 반환하는 함수
{
	char menu;

	while (1)
	{
		printf("# 메뉴를 선택하시오(i - 입금, o - 출금, q - 종료) : ");
		scanf("%c", &menu);
		myflush();

		if (menu == 'i' || menu == 'o' || menu == 'q')
		{
			return menu;
		}
		printf("* 잘못 입력하셨습니다.\n\n");
	}
}
int inputInt(char *string) // main()의 money를 call by pointer 하는 함수
{
	int check;
	int money;

	printf("%s", string);

	while (1)
	{
		check = scanf("%d", &money);

		if (check == 1 && money >= 0)
		{
			return money;
		}

		myflush();
		printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
	}
}

int deposit(int my_money)
{
	int input_money;
	
	input_money = inputInt("* 입금액을 입력하세요 : ");

	my_money += input_money;

	return my_money;
}

int withdraw(int my_money)
{
	int input_money;

	input_money = inputInt("* 출금액을 입력하세요 : ");

	if (input_money > my_money)
	{
		printf("* 잔액이 부족합니다.\n");
		return my_money;
	}

	my_money -= input_money;

	return my_money;
}
