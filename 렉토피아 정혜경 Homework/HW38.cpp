#include<stdio.h>
#define SNACK 700
#define BREAD 500
#define COKE 400

int inputMoney(int *check);
void outputResult(int money);
int nowPrice(int bread_count, int snack_count, int coke_count);

int main(void)
{
	int money;
	int check = 1;
	while (check != 0)
	{
		money = inputMoney(&check);
		outputResult(money);
		if (check == 1) printf("어떻게 구입하시겠습니까?\n\n");
	}

	return 0;
}

int inputMoney(int *check)
{
	int money;

	printf("현재 당신의 소유 금액 입력 : ");
	*check = scanf("%d", &money);
	while (getchar() != '\n');

	return money;
}

void outputResult(int money)
{
	int minimum_count = 1;
	int bread_count = minimum_count, snack_count = minimum_count, coke_count = minimum_count;
	int my_money;
	int now_price = 0;

	now_price = nowPrice(bread_count, snack_count, coke_count);
	my_money = money - now_price;

	if (money == now_price) printf("크림빵(%d 개), 새우깡(%d 개), 콜라(%d 병)\n", bread_count, snack_count, coke_count);

	while (my_money > 0)
	{
		while (my_money > 0)
		{
			while (my_money > 0)
			{
				coke_count++;
				now_price = nowPrice(bread_count, snack_count, coke_count);
				my_money = money - now_price;

				if (money == now_price) printf("크림빵(%d 개), 새우깡(%d 개), 콜라(%d 병)\n", bread_count, snack_count, coke_count);

			}
			coke_count = minimum_count;
			snack_count++;
			now_price = nowPrice(bread_count, snack_count, coke_count);
			my_money = money - now_price;

			if (money == now_price) printf("크림빵(%d 개), 새우깡(%d 개), 콜라(%d 병)\n", bread_count, snack_count, coke_count);
		}

		snack_count = minimum_count;
		bread_count++;
		now_price = nowPrice(bread_count, snack_count, coke_count);
		my_money = money - now_price;

		if (money == now_price) printf("크림빵(%d 개), 새우깡(%d 개), 콜라(%d 병)\n", bread_count, snack_count, coke_count);
	}
	
}

int nowPrice(int bread_count, int snack_count, int coke_count)
{
	int now_price;
	int bread_price = bread_count * BREAD, snack_price = snack_count * SNACK, coke_price = coke_count * COKE;

	bread_price = bread_count * BREAD;
	snack_price = snack_count * SNACK;
	coke_price = coke_count * COKE;

	now_price = bread_price + snack_price + coke_price;

	return now_price;
}