#include<stdio.h>

int main(void)
{
	int money;
	int m50000=0, m10000=0, m5000=0, m1000=0, m500=0, m100=0, m50=0, m10=0;

	money = 278970;

	m50000 = money / 50000;
	money = money - (m50000 * 50000);

	m10000 = money / 10000;
	money = money - (m10000 * 10000);

	m5000 = money / 5000;
	money = money - (m5000 * 5000);

	m1000 = money / 1000;
	money = money - (m1000 * 1000);

	m500 = money / 500;
	money = money - (m500 * 500);

	m100 = money / 100;
	money = money - (m100 * 100);

	m50 = money / 50;
	money = money - (m50 * 50);

	m10 = money / 10;
	money = money - (m10 * 10);

	printf("50000���� == > %d��\n", m50000);
	printf("10000���� == > %d��\n", m10000);
	printf("5000���� == > %d��\n", m5000);
	printf("1000���� == > %d��\n", m1000);
	printf("500���� == > %d��\n", m500);
	printf("100���� == > %d��\n", m100);
	printf("50���� == > %d��\n", m50);
	printf("10���� == > %d��\n", m10);

	return 0;
}