#include<stdio.h>

int inputAge(void);
int inputCustomer_number(void);
void outResult(int age,int customer_number);

int main(void)
{
	int age, customer_number;

	age = inputAge();
	customer_number = inputCustomer_number();
	outResult(age, customer_number);

	return 0;
}
int inputAge(void)
{
	int age;

	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d", &age);

	return age;
}
int inputCustomer_number(void)
{
	int customer_number;

	printf("입장객의 수를 입력하시오 : ");
	scanf("%d",&customer_number);

	return 	customer_number;
}
void outResult(int age, int customer_number)
{
	int fare = 0;
	int discount = 0;
	int price = 0;

	if (age > 0 && age <= 7)
	{
		fare = 500;
	}
	else if (age > 7 && age <= 13)
	{
		fare = 700;
	}
	else if (age > 14 && age <= 19)
	{
		fare = 1000;
	}
	else if (age > 20 && age <= 55)
	{
		fare = 1500;
	}
	else if (age > 55)
	{
		fare = 500;
	}

	price = fare*customer_number;

	if (customer_number >= 5)
	{
		discount = price * 0.1;
	}

	printf("입장료 : %d원\n",price);
	printf("할인금액 : %d원\n", discount);
	printf("결제금액 : %d원\n", price - discount);

}