#include<stdio.h>

int main(void)
{
	int year;

	printf("������ �Է����ּ���(���ڸ�) : ");
	scanf("%d", &year);

	if (year % 1000 == 0)
	{
		printf("����\n");
	}
	else if (year % 1000 != 0 && year %100 ==0)
	{
		printf("���\n");
	}
	else if(year % 1000 != 0 && year % 100 != 0&& year % 4 == 0)
	{
		printf("����\n");
	}
	else if (year < 0 || year == 0)
	{
		return 0;
	}
	else printf("���\n");
}