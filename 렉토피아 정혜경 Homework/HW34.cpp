#include<stdio.h>
#include<string.h>

void myflush(void);
int input_data(int* usage);
double calculate_fee(int usage, int menu_number);
void output_fee(double fee, int usage, int menu_number);

int main(void)
{
	int usage = 0;
	int menu_number;
	double fee;

	menu_number = input_data(&usage);
	fee = calculate_fee(usage, menu_number);
	output_fee(fee, usage, menu_number);

	return 0;
}

void myflush(void)
{
	while (getchar() != '\n');
}

int input_data(int* usage)
{
	int number;
	int check_usage, check_number;

	while (1)
	{
		printf("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
		check_number = scanf("%d", &number);

		if (check_number == 1 && (number > 0 && number < 4))
		{
			myflush();
			break;
		}

		printf("! 1~3�� ������ �Է����ּ���.\n\n");
		myflush();
	}

	while (1)
	{
		printf("* ��뷮�� �Է��Ͻÿ�(ton����) : ");
		check_usage = scanf("%d", usage);

		if (check_usage == 1 && *usage >= 0)
		{
			myflush();
			break;
		}

		printf("! 0�̻��� ������ �Է����ּ��� \n\n");
		myflush();
	}

	return number;
}

double calculate_fee(int usage, int menu_number)
{
	double per_ton;
	double water_fee;
	double tax;

	if (menu_number == 1) per_ton = 50.0;
	else if (menu_number == 2) per_ton = 45.0;
	else per_ton = 30.0;

	water_fee = (double)usage * per_ton;
	tax = water_fee * 0.05;

	water_fee += tax;

	return water_fee;
}

void output_fee(double fee, int usage, int menu_number)
{
	char user_code[10];

	if (menu_number == 1) strcpy(user_code, "������");
	else if (menu_number == 2) strcpy(user_code, "�����");
	else strcpy(user_code, "������");

	printf("\n\n");
	printf("# ������ڵ� : %d(%s)\n", menu_number, user_code);
	printf("# ��뷮 : %d ton\n", usage);
	printf("# �Ѽ������ : %d��\n", (int)fee);
}
