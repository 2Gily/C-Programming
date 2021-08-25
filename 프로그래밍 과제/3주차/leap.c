#include<stdio.h>

int main(void)
{
	int year;

	printf("연도를 입력해주세요(숫자만) : ");
	scanf("%d", &year);

	if (year % 1000 == 0)
	{
		printf("윤년\n");
	}
	else if (year % 1000 != 0 && year %100 ==0)
	{
		printf("평년\n");
	}
	else if(year % 1000 != 0 && year % 100 != 0&& year % 4 == 0)
	{
		printf("윤년\n");
	}
	else if (year < 0 || year == 0)
	{
		return 0;
	}
	else printf("평년\n");
}