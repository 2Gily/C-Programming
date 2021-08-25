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
		printf("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
		check_number = scanf("%d", &number);

		if (check_number == 1 && (number > 0 && number < 4))
		{
			myflush();
			break;
		}

		printf("! 1~3의 정수를 입력해주세요.\n\n");
		myflush();
	}

	while (1)
	{
		printf("* 사용량을 입력하시오(ton단위) : ");
		check_usage = scanf("%d", usage);

		if (check_usage == 1 && *usage >= 0)
		{
			myflush();
			break;
		}

		printf("! 0이상의 정수를 입력해주세요 \n\n");
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

	if (menu_number == 1) strcpy(user_code, "가정용");
	else if (menu_number == 2) strcpy(user_code, "상업용");
	else strcpy(user_code, "공업용");

	printf("\n\n");
	printf("# 사용자코드 : %d(%s)\n", menu_number, user_code);
	printf("# 사용량 : %d ton\n", usage);
	printf("# 총수도요금 : %d원\n", (int)fee);
}
