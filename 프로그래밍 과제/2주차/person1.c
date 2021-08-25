#include<stdio.h>

int main(void)
{
	char name[25] = "이길형";
	int age = 29;
	float height = 176.5;
	char type[10] = "O형";

	printf("10년 후의 프로필...\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n",age+=10);
	printf("키 : %.1f\n", height -= 0.5);
	printf("혈액형 : %s\n",type);

	return 0;

}