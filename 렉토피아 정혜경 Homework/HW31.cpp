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
		printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", my_money);

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

void myflush(void) // ���۸� ���� �Լ�
{
	char ch;

	while (ch=getchar() != '\n');
}

char menu(void) // menu �Է��ϰ� ��ȯ�ϴ� �Լ�
{
	char menu;

	while (1)
	{
		printf("# �޴��� �����Ͻÿ�(i - �Ա�, o - ���, q - ����) : ");
		scanf("%c", &menu);
		myflush();

		if (menu == 'i' || menu == 'o' || menu == 'q')
		{
			return menu;
		}
		printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
	}
}
int inputInt(char *string) // main()�� money�� call by pointer �ϴ� �Լ�
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
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
	}
}

int deposit(int my_money)
{
	int input_money;
	
	input_money = inputInt("* �Աݾ��� �Է��ϼ��� : ");

	my_money += input_money;

	return my_money;
}

int withdraw(int my_money)
{
	int input_money;

	input_money = inputInt("* ��ݾ��� �Է��ϼ��� : ");

	if (input_money > my_money)
	{
		printf("* �ܾ��� �����մϴ�.\n");
		return my_money;
	}

	my_money -= input_money;

	return my_money;
}
